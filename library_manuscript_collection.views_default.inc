<?php
/**
 * @file
 * library_manuscript_collection.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_manuscript_collection_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'manuscript_collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manuscript Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manuscript Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_manuscript_collection_num' => 'field_manuscript_collection_num',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_manuscript_collection_num' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Collection Number */
  $handler->display->display_options['fields']['field_manuscript_collection_num']['id'] = 'field_manuscript_collection_num';
  $handler->display->display_options['fields']['field_manuscript_collection_num']['table'] = 'field_data_field_manuscript_collection_num';
  $handler->display->display_options['fields']['field_manuscript_collection_num']['field'] = 'field_manuscript_collection_num';
  $handler->display->display_options['fields']['field_manuscript_collection_num']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_manuscript_image']['id'] = 'field_manuscript_image';
  $handler->display->display_options['fields']['field_manuscript_image']['table'] = 'field_data_field_manuscript_image';
  $handler->display->display_options['fields']['field_manuscript_image']['field'] = 'field_manuscript_image';
  $handler->display->display_options['fields']['field_manuscript_image']['label'] = '';
  $handler->display->display_options['fields']['field_manuscript_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manuscript_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_manuscript_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Finding Aid */
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['id'] = 'field_manuscript_finding_aid';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['table'] = 'field_data_field_manuscript_finding_aid';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['field'] = 'field_manuscript_finding_aid';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['type'] = 'file_table';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_manuscript_collection' => 'library_manuscript_collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'manuscript-collections-b';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'manuscript-listing';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>This area contains over 175 manuscript collections, comprising nearly 1800 linear feet of material, plus a number of individual manuscript items. Each of these collections is described in brief on ODYsseus the Libraries’ online catalog. Additionally, many have detailed finding aids, searchable here. Others will be added to this list as they are completed. If you find you have questions about the collections after you have read the catalog entries or finding aids, please contact us.

Mark McMurray, Curator of Special Collections and University Archivist
Voice: (315) 229-5476 e-mail: mcm@stlawu.edu

Paul Haggett, Assistant to the Archivist
Voice: (315) 229-5956 e-mail: phaggett@stlawu.edu</p>';
  $handler->display->display_options['header']['area']['format'] = 'richtext_editor';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Collection Number */
  $handler->display->display_options['fields']['field_manuscript_collection_num']['id'] = 'field_manuscript_collection_num';
  $handler->display->display_options['fields']['field_manuscript_collection_num']['table'] = 'field_data_field_manuscript_collection_num';
  $handler->display->display_options['fields']['field_manuscript_collection_num']['field'] = 'field_manuscript_collection_num';
  $handler->display->display_options['fields']['field_manuscript_collection_num']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_manuscript_collection_num']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Collection Length */
  $handler->display->display_options['fields']['field_manuscript_coll_length']['id'] = 'field_manuscript_coll_length';
  $handler->display->display_options['fields']['field_manuscript_coll_length']['table'] = 'field_data_field_manuscript_coll_length';
  $handler->display->display_options['fields']['field_manuscript_coll_length']['field'] = 'field_manuscript_coll_length';
  $handler->display->display_options['fields']['field_manuscript_coll_length']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_manuscript_coll_length']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Period */
  $handler->display->display_options['fields']['field_manuscript_period_start']['id'] = 'field_manuscript_period_start';
  $handler->display->display_options['fields']['field_manuscript_period_start']['table'] = 'field_data_field_manuscript_period_start';
  $handler->display->display_options['fields']['field_manuscript_period_start']['field'] = 'field_manuscript_period_start';
  $handler->display->display_options['fields']['field_manuscript_period_start']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_manuscript_period_start']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_manuscript_image']['id'] = 'field_manuscript_image';
  $handler->display->display_options['fields']['field_manuscript_image']['table'] = 'field_data_field_manuscript_image';
  $handler->display->display_options['fields']['field_manuscript_image']['field'] = 'field_manuscript_image';
  $handler->display->display_options['fields']['field_manuscript_image']['label'] = '';
  $handler->display->display_options['fields']['field_manuscript_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manuscript_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_manuscript_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_manuscript_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_manuscript_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Finding Aid */
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['id'] = 'field_manuscript_finding_aid';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['table'] = 'field_data_field_manuscript_finding_aid';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['field'] = 'field_manuscript_finding_aid';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_manuscript_finding_aid']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Collection Number (field_manuscript_collection_num) */
  $handler->display->display_options['sorts']['field_manuscript_collection_num_value']['id'] = 'field_manuscript_collection_num_value';
  $handler->display->display_options['sorts']['field_manuscript_collection_num_value']['table'] = 'field_data_field_manuscript_collection_num';
  $handler->display->display_options['sorts']['field_manuscript_collection_num_value']['field'] = 'field_manuscript_collection_num_value';
  $handler->display->display_options['sorts']['field_manuscript_collection_num_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_manuscript_collection_num_value']['expose']['label'] = 'Collection Number';
  $handler->display->display_options['path'] = 'manuscript-collections';
  $export['manuscript_collections'] = $view;

  return $export;
}
