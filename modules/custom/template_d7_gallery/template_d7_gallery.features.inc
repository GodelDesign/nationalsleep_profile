<?php
/**
 * @file
 * template_d7_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function template_d7_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function template_d7_gallery_node_info() {
  $items = array(
    'gallery_gallery' => array(
      'name' => t('gallery_gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
