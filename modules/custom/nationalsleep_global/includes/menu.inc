<?php

/**
 * Implements hook_menu()
 */
function nationalsleep_global_menu() {
  $items = array();

  /* Blank placeholder for the front page */
  $items['home'] = array(
    'title' => 'Home', // Will likely be overriden by page_title module
    'description' => 'The front page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

    /* Blank placeholder for the contact page */
  $items['contact'] = array(
    'title' => 'Home', // Will likely be overriden by page_title module
    'description' => 'The contact page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

    /* Blank placeholder for the about page */
  $items['about'] = array(
    'title' => 'About', // Will likely be overriden by page_title module
    'description' => 'The about page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

  /* Blank placeholder for the sleep apnoea page */
  $items['sleepapnoea'] = array(
    'title' => 'Sleep Apnoea', // Will likely be overriden by page_title module
    'description' => 'The sleep apnoea page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

    /* Blank placeholder for the our people page */
  $items['ourpeople'] = array(
    'title' => 'Our People', // Will likely be overriden by page_title module
    'description' => 'The our people page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

    /* Blank placeholder for the common sleep disorders page */
  $items['commonsleepdisorders'] = array(
    'title' => 'Common Sleep Disorders', // Will likely be overriden by page_title module
    'description' => 'The common sleep disorders page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

    /* Blank placeholder for the physicians page */
  $items['physicians'] = array(
    'title' => 'Physicians', // Will likely be overriden by page_title module
    'description' => 'The physicians page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

  /* Blank placeholder for the sleep test page */
  $items['sleeptest'] = array(
    'title' => 'Arrange A Sleep Test', // Will likely be overriden by page_title module
    'description' => 'The sleep test page',
    'page callback' => 'nationalsleep_global_blank_page',
    'access callback' => TRUE, // Assume most use-cases require all users to see the front page
    'type' => MENU_CALLBACK,
    'file' => 'includes/nationalsleep_global.pages.inc',
  );

/* Page to redirect to for incompatible browsers */
 $items['browser-unsupported'] = array(
  'title' => 'Your browser is unsupported',
  'description' => 'Browser unsupported page',
  'page callback' => 'nationalsleep_global_incompatible_browser_page',
  'access callback' => TRUE, // Everyone with a shit browser needs to see this
  'type' => MENU_CALLBACK,
  'file' => 'includes/nationalsleep_global.pages.inc',
  );

  return $items;
}

/**
 * Implements hook_menu_alter()
 */
function nationalsleep_global_menu_alter(&$items) {

  /* Production Check will complain about this as a security risk if we leave it set */
  unset($items['node']);

}
