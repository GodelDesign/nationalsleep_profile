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

  // Logo block.
  $blocks['logo'] = array(
    'info' => t('Logo'),
  );

    // Menu block.
  $blocks['menu'] = array(
    'info' => t('Menu'),
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
 * Renders the logo block.
 */
function nationalsleep_global_block_logo_view() {
  $block = array();
  $block['subject'] = '';

  $content = '';
  $content .= '<img src="profiles/nationalsleep_profile/themes/custom/nationalsleep_theme/css/img/nsdlogo.png">';

  $block['content'] = $content;

  return $block;
}

/**
 * Renders the menu block.
 */
function nationalsleep_global_block_menu_view() {
  $block = array();
  $block['subject'] = '';

$link_data = array(
  'About Us'=>'aboutus',
  'Advisory' => 'advisory',
  'Recovery & Turnaround' => 'recovery',
  'Newsletter' => 'news',
  'Our People' => 'ourpeople',
  'Contact Us' => 'contactus'
);

$markup = array();

foreach($link_data as $title => $path){
  $markup[] = l($title, $path);
}

$variables = array(
'type'=>'ul',
'items'=> $markup
);


  $content = print theme('item_list', $variables);

  $block['content'] = $content;

  return $block;
}
