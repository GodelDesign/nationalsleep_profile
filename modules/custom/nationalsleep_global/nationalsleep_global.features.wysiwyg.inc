<?php
/**
 * @file
 * nationalsleep_global.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function nationalsleep_global_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: wysiwyg_basic
  $profiles['wysiwyg_basic'] = array(
    'format' => 'wysiwyg_basic',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'link' => 1,
          'unlink' => 1,
          'code' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'safari' => array(
          'safari' => 1,
        ),
        'autoresize' => array(
          'autoresize' => 1,
        ),
        'wordcount' => array(
          'wordcount' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 1,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'none',
      'css_path' => '',
      'css_classes' => '',
    ),
    'metatags' => array(),
  );

  return $profiles;
}
