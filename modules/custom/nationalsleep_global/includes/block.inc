<?php
/**
 * @file
 * Integrate nationalsleep.module with block.module
 */

/**
 * Implements hook_block_info().
 */
function nationalsleep_global_block_info() {
  $blocks = array();

  // Blank template block.
  $blocks['blank'] = array(
    'info' => t('Blank'),
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function nationalsleep_global_block_view($delta = ''){
  $ret = '';

  $function = 'nationalsleep_global_block_' . $delta . '_view';
  if(function_exists($function)) {
    $ret = $function();
  }

  return $ret;
}

/**
 * Renders the blank block.
 */
function nationalsleep_global_block_welcome_view() {
  $block = array();
  $block['subject'] = '';

  $content = '';
  $content .= '<h2>Blank</h2>';

  $block['content'] = $content;

  return $block;
}
