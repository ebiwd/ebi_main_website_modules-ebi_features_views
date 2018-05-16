<?php
/**
 * @file
 * ebi_features_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ebi_features_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jobs_main_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'json';
  $view->human_name = 'Jobs Main Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['json_file'] = 'https://www.ebi.ac.uk/api/v1/jobs';
  $handler->display->display_options['query']['options']['row_apath'] = 'list';
  $handler->display->display_options['query']['options']['enable_pagination_query_parameters'] = 0;
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['query']['options']['ssl_allow_self_signed'] = 0;
  $handler->display->display_options['query']['options']['ssl_cafile'] = '';
  $handler->display->display_options['query']['options']['ssl_capath'] = '';
  $handler->display->display_options['query']['options']['ssl_local_cert'] = '';
  $handler->display->display_options['query']['options']['ssl_passphrase'] = '';
  $handler->display->display_options['query']['options']['ssl_CN_match'] = '';
  $handler->display->display_options['query']['options']['ssl_verify_depth'] = '';
  $handler->display->display_options['query']['options']['ssl_SNI_enabled'] = 0;
  $handler->display->display_options['query']['options']['ssl_SNI_server_name'] = '';
  $handler->display->display_options['query']['options']['ssl_peer_fingerprint'] = '';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'job-item-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="https://ig14.i-grasp.com/fe/tpl_embl01.asp?newlang=1&newms=ja" target="_blank">
<i class="icon icon-generic icon-spacer" data-icon="E" style="
    font-size: .9rem;
"></i>Sign up for job alerts</a>  or <a href="https://twitter.com/emblebijobs" target="_blank"><i class="icon icon-socialmedia" data-icon="T"></i> follow us on Twitter</a>  to get notified of new career opportunities.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="jobs-box">
We didn\'t find jobs with this search criteria.
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: reference_number: value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'json';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = '';
  $handler->display->display_options['fields']['value_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['key'] = 'reference_number';
  /* Field: path: value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'json';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = '';
  $handler->display->display_options['fields']['value_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['key'] = 'path';
  /* Field: publish_date: value */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'json';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = 'Posting date';
  $handler->display->display_options['fields']['value_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_8']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['value_8']['element_wrapper_class'] = 'secondary-color label';
  $handler->display->display_options['fields']['value_8']['key'] = 'publish_date';
  /* Field: categorization: value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'json';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = '';
  $handler->display->display_options['fields']['value_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_6']['element_type'] = 'span';
  $handler->display->display_options['fields']['value_6']['element_class'] = 'secondary tag';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['value_6']['key'] = 'categorization';
  /* Field: staff_category: value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'json';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = '';
  $handler->display->display_options['fields']['value_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_7']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['value_7']['element_wrapper_class'] = 'tag secondary';
  $handler->display->display_options['fields']['value_7']['key'] = 'staff_category';
  /* Field: Top strip */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Top strip';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="label secondary-color">Posting date: [value_8]</span> 
<span class="">
  | <span class="label secondary-color">[value_6]</span> |  <span class="label secondary-color">[value_7]</span>
</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: title: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['path'] = 'https://www.embl.de/jobs/searchjobs/index.php?ref=[value_4]';
  $handler->display->display_options['fields']['value']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['value']['element_type'] = 'strong';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['key'] = 'title';
  /* Field: Custom title */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom title';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h5 class="padding-top-medium"><strong>[value]</strong></h5>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: summary: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['alter']['max_length'] = '185';
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['value_1']['element_type'] = 'p';
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['key'] = 'summary';
  /* Field: description: value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'json';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = '';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_2']['alter']['text'] = '[value_2]';
  $handler->display->display_options['fields']['value_2']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['value_2']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['value_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_2']['key'] = 'description';
  /* Field: Apply link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Apply link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="icon icon-functional" data-icon="/"></i> Apply now';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'https://www.embl.de/jobs/searchjobs/index.php?ref=[value_4]';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'span';
  /* Field: expiration_date: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Application close';
  $handler->display->display_options['fields']['value_3']['element_type'] = 'span';
  $handler->display->display_options['fields']['value_3']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['value_3']['element_wrapper_class'] = 'label secondary-color padding-left-large';
  $handler->display->display_options['fields']['value_3']['key'] = 'expiration_date';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Query String: keyword */
  $handler->display->display_options['filters']['query_string']['id'] = 'query_string';
  $handler->display->display_options['filters']['query_string']['table'] = 'json';
  $handler->display->display_options['filters']['query_string']['field'] = 'query_string';
  $handler->display->display_options['filters']['query_string']['operator'] = 'contains';
  $handler->display->display_options['filters']['query_string']['group'] = 1;
  $handler->display->display_options['filters']['query_string']['exposed'] = TRUE;
  $handler->display->display_options['filters']['query_string']['expose']['operator_id'] = 'query_string_op';
  $handler->display->display_options['filters']['query_string']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['query_string']['expose']['operator'] = 'query_string_op';
  $handler->display->display_options['filters']['query_string']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['query_string']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    19 => 0,
    18 => 0,
    22 => 0,
    20 => 0,
    21 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['query_string']['name'] = 'keyword';
  /* Filter criterion: Query String: categorization */
  $handler->display->display_options['filters']['query_string_1']['id'] = 'query_string_1';
  $handler->display->display_options['filters']['query_string_1']['table'] = 'json';
  $handler->display->display_options['filters']['query_string_1']['field'] = 'query_string';
  $handler->display->display_options['filters']['query_string_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['query_string_1']['expose']['operator_id'] = 'query_string_1_op';
  $handler->display->display_options['filters']['query_string_1']['expose']['label'] = 'Categorization';
  $handler->display->display_options['filters']['query_string_1']['expose']['operator'] = 'query_string_1_op';
  $handler->display->display_options['filters']['query_string_1']['expose']['identifier'] = 'categorization';
  $handler->display->display_options['filters']['query_string_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    19 => 0,
    18 => 0,
    22 => 0,
    20 => 0,
    21 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['query_string_1']['name'] = 'categorization';

  /* Display: Listing block */
  $handler = $view->new_display('block', 'Listing block', 'block');
  $export['jobs_main_listing'] = $view;

  return $export;
}
