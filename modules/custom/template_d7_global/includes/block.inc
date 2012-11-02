<?php
/**
 * @file
 * Integrate template_d7.module with block.module
 */

/**
 * Implements hook_block_info().
 */
function template_d7_global_block_info() {
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
function template_d7_global_block_view($delta = ''){
  $ret = '';

  $function = 'template_d7_global_block_' . $delta . '_view';
  if(function_exists($function)) {
    $ret = $function();
  }

  return $ret;
}

/**
 * Renders the blank block.
 */
function template_d7_global_block_welcome_view() {
  $block = array();
  $block['subject'] = '';

  $content = '';
  $content .= '<h2>Blank</h2>';

  $block['content'] = $content;

  return $block;
}
