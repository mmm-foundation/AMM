// This file is generated from ship_abi_gen using ship_protocol.hpp as input, please do NOT modify it directly.
// Any modification to ship protocol should be done through ship_protocol.hpp and the file can be regenerated via
// the build system.
extern const char* const state_history_plugin_abi = R"({"version":"eosio::abi/1.1","structs":[{"name":"account_auth_sequence","fields":[{"name":"account","type":"name"},{"name":"sequence","type":"uint64"}]},{"name":"account_delta","fields":[{"name":"account","type":"name"},{"name":"delta","type":"int64"}]},{"name":"account_metadata_v0","fields":[{"name":"name","type":"name"},{"name":"privileged","type":"bool"},{"name":"last_code_update","type":"time_point"},{"name":"code","type":"code_id?"}]},{"name":"account_v0","fields":[{"name":"name","type":"name"},{"name":"creation_date","type":"block_timestamp_type"},{"name":"abi","type":"bytes"}]},{"name":"action","fields":[{"name":"account","type":"name"},{"name":"name","type":"name"},{"name":"authorization","type":"permission_level[]"},{"name":"data","type":"bytes"}]},{"name":"action_receipt_v0","fields":[{"name":"receiver","type":"name"},{"name":"act_digest","type":"checksum256"},{"name":"global_sequence","type":"uint64"},{"name":"recv_sequence","type":"uint64"},{"name":"auth_sequence","type":"account_auth_sequence[]"},{"name":"code_sequence","type":"varuint32"},{"name":"abi_sequence","type":"varuint32"}]},{"name":"action_trace_v0","fields":[{"name":"action_ordinal","type":"varuint32"},{"name":"creator_action_ordinal","type":"varuint32"},{"name":"receipt","type":"action_receipt?"},{"name":"receiver","type":"name"},{"name":"act","type":"action"},{"name":"context_free","type":"bool"},{"name":"elapsed","type":"int64"},{"name":"console","type":"string"},{"name":"account_ram_deltas","type":"account_delta[]"},{"name":"except","type":"string?"},{"name":"error_code","type":"uint64?"}]},{"name":"action_trace_v1","fields":[{"name":"action_ordinal","type":"varuint32"},{"name":"creator_action_ordinal","type":"varuint32"},{"name":"receipt","type":"action_receipt?"},{"name":"receiver","type":"name"},{"name":"act","type":"action"},{"name":"context_free","type":"bool"},{"name":"elapsed","type":"int64"},{"name":"console","type":"string"},{"name":"account_ram_deltas","type":"account_delta[]"},{"name":"except","type":"string?"},{"name":"error_code","type":"uint64?"},{"name":"return_value","type":"bytes"}]},{"name":"activated_protocol_feature_v0","fields":[{"name":"feature_digest","type":"checksum256"},{"name":"activation_block_num","type":"uint32"}]},{"name":"authority","fields":[{"name":"threshold","type":"uint32"},{"name":"keys","type":"key_weight[]"},{"name":"accounts","type":"permission_level_weight[]"},{"name":"waits","type":"wait_weight[]"}]},{"name":"block_position","fields":[{"name":"block_num","type":"uint32"},{"name":"block_id","type":"checksum256"}]},{"name":"block_signing_authority_v0","fields":[{"name":"threshold","type":"uint32"},{"name":"keys","type":"key_weight[]"}]},{"name":"chain_config_v0","fields":[{"name":"max_block_net_usage","type":"uint64"},{"name":"target_block_net_usage_pct","type":"uint32"},{"name":"max_transaction_net_usage","type":"uint32"},{"name":"base_per_transaction_net_usage","type":"uint32"},{"name":"net_usage_leeway","type":"uint32"},{"name":"context_free_discount_net_usage_num","type":"uint32"},{"name":"context_free_discount_net_usage_den","type":"uint32"},{"name":"max_block_cpu_usage","type":"uint32"},{"name":"target_block_cpu_usage_pct","type":"uint32"},{"name":"max_transaction_cpu_usage","type":"uint32"},{"name":"min_transaction_cpu_usage","type":"uint32"},{"name":"max_transaction_lifetime","type":"uint32"},{"name":"deferred_trx_expiration_window","type":"uint32"},{"name":"max_transaction_delay","type":"uint32"},{"name":"max_inline_action_size","type":"uint32"},{"name":"max_inline_action_depth","type":"uint16"},{"name":"max_authority_depth","type":"uint16"}]},{"name":"chain_config_v1","fields":[{"name":"max_block_net_usage","type":"uint64"},{"name":"target_block_net_usage_pct","type":"uint32"},{"name":"max_transaction_net_usage","type":"uint32"},{"name":"base_per_transaction_net_usage","type":"uint32"},{"name":"net_usage_leeway","type":"uint32"},{"name":"context_free_discount_net_usage_num","type":"uint32"},{"name":"context_free_discount_net_usage_den","type":"uint32"},{"name":"max_block_cpu_usage","type":"uint32"},{"name":"target_block_cpu_usage_pct","type":"uint32"},{"name":"max_transaction_cpu_usage","type":"uint32"},{"name":"min_transaction_cpu_usage","type":"uint32"},{"name":"max_transaction_lifetime","type":"uint32"},{"name":"deferred_trx_expiration_window","type":"uint32"},{"name":"max_transaction_delay","type":"uint32"},{"name":"max_inline_action_size","type":"uint32"},{"name":"max_inline_action_depth","type":"uint16"},{"name":"max_authority_depth","type":"uint16"},{"name":"max_action_return_value_size","type":"uint32"}]},{"name":"code_id","fields":[{"name":"vm_type","type":"uint8"},{"name":"vm_version","type":"uint8"},{"name":"code_hash","type":"checksum256"}]},{"name":"code_v0","fields":[{"name":"vm_type","type":"uint8"},{"name":"vm_version","type":"uint8"},{"name":"code_hash","type":"checksum256"},{"name":"code","type":"bytes"}]},{"name":"contract_index128_v0","fields":[{"name":"code","type":"name"},{"name":"scope","type":"name"},{"name":"table","type":"name"},{"name":"primary_key","type":"uint64"},{"name":"payer","type":"name"},{"name":"secondary_key","type":"uint128"}]},{"name":"contract_index256_v0","fields":[{"name":"code","type":"name"},{"name":"scope","type":"name"},{"name":"table","type":"name"},{"name":"primary_key","type":"uint64"},{"name":"payer","type":"name"},{"name":"secondary_key","type":"checksum256"}]},{"name":"contract_index64_v0","fields":[{"name":"code","type":"name"},{"name":"scope","type":"name"},{"name":"table","type":"name"},{"name":"primary_key","type":"uint64"},{"name":"payer","type":"name"},{"name":"secondary_key","type":"uint64"}]},{"name":"contract_index_double_v0","fields":[{"name":"code","type":"name"},{"name":"scope","type":"name"},{"name":"table","type":"name"},{"name":"primary_key","type":"uint64"},{"name":"payer","type":"name"},{"name":"secondary_key","type":"float64"}]},{"name":"contract_index_long_double_v0","fields":[{"name":"code","type":"name"},{"name":"scope","type":"name"},{"name":"table","type":"name"},{"name":"primary_key","type":"uint64"},{"name":"payer","type":"name"},{"name":"secondary_key","type":"float128"}]},{"name":"contract_row_v0","fields":[{"name":"code","type":"name"},{"name":"scope","type":"name"},{"name":"table","type":"name"},{"name":"primary_key","type":"uint64"},{"name":"payer","type":"name"},{"name":"value","type":"bytes"}]},{"name":"contract_table_v0","fields":[{"name":"code","type":"name"},{"name":"scope","type":"name"},{"name":"table","type":"name"},{"name":"payer","type":"name"}]},{"name":"elastic_limit_parameters_v0","fields":[{"name":"target","type":"uint64"},{"name":"max","type":"uint64"},{"name":"periods","type":"uint32"},{"name":"max_multiplier","type":"uint32"},{"name":"contract_rate","type":"resource_limits_ratio"},{"name":"expand_rate","type":"resource_limits_ratio"}]},{"name":"extension","fields":[{"name":"type","type":"uint16"},{"name":"data","type":"bytes"}]},{"name":"generated_transaction_v0","fields":[{"name":"sender","type":"name"},{"name":"sender_id","type":"uint128"},{"name":"payer","type":"name"},{"name":"trx_id","type":"checksum256"},{"name":"packed_trx","type":"bytes"}]},{"name":"get_blocks_ack_request_v0","fields":[{"name":"num_messages","type":"uint32"}]},{"name":"get_blocks_request_v0","fields":[{"name":"start_block_num","type":"uint32"},{"name":"end_block_num","type":"uint32"},{"name":"max_messages_in_flight","type":"uint32"},{"name":"have_positions","type":"block_position[]"},{"name":"irreversible_only","type":"bool"},{"name":"fetch_block","type":"bool"},{"name":"fetch_traces","type":"bool"},{"name":"fetch_deltas","type":"bool"}]},{"name":"get_blocks_result_v0","fields":[{"name":"head","type":"block_position"},{"name":"last_irreversible","type":"block_position"},{"name":"this_block","type":"block_position?"},{"name":"prev_block","type":"block_position?"},{"name":"block","type":"bytes?"},{"name":"traces","type":"bytes?"},{"name":"deltas","type":"bytes?"}]},{"name":"get_status_request_v0"},{"name":"get_status_result_v0","fields":[{"name":"head","type":"block_position"},{"name":"last_irreversible","type":"block_position"},{"name":"trace_begin_block","type":"uint32"},{"name":"trace_end_block","type":"uint32"},{"name":"chain_state_begin_block","type":"uint32"},{"name":"chain_state_end_block","type":"uint32"},{"name":"chain_id","type":"checksum256$"}]},{"name":"global_property_v0","fields":[{"name":"proposed_schedule_block_num","type":"uint32?"},{"name":"proposed_schedule","type":"producer_schedule"},{"name":"configuration","type":"chain_config"}]},{"name":"global_property_v1","fields":[{"name":"proposed_schedule_block_num","type":"uint32?"},{"name":"proposed_schedule","type":"producer_authority_schedule"},{"name":"configuration","type":"chain_config"},{"name":"chain_id","type":"checksum256"},{"name":"wasm_configuration","type":"wasm_config$"}]},{"name":"key_weight","fields":[{"name":"key","type":"public_key"},{"name":"weight","type":"uint16"}]},{"name":"packed_transaction","fields":[{"name":"signatures","type":"signature[]"},{"name":"compression","type":"uint8"},{"name":"packed_context_free_data","type":"bytes"},{"name":"packed_trx","type":"bytes"}]},{"name":"partial_transaction_v0","fields":[{"name":"expiration","type":"time_point_sec"},{"name":"ref_block_num","type":"uint16"},{"name":"ref_block_prefix","type":"uint32"},{"name":"max_net_usage_words","type":"varuint32"},{"name":"max_cpu_usage_ms","type":"uint8"},{"name":"delay_sec","type":"varuint32"},{"name":"transaction_extensions","type":"extension[]"},{"name":"signatures","type":"signature[]"},{"name":"context_free_data","type":"bytes[]"}]},{"name":"permission_level","fields":[{"name":"actor","type":"name"},{"name":"permission","type":"name"}]},{"name":"permission_level_weight","fields":[{"name":"permission","type":"permission_level"},{"name":"weight","type":"uint16"}]},{"name":"permission_link_v0","fields":[{"name":"account","type":"name"},{"name":"code","type":"name"},{"name":"message_type","type":"name"},{"name":"required_permission","type":"name"}]},{"name":"permission_v0","fields":[{"name":"owner","type":"name"},{"name":"name","type":"name"},{"name":"parent","type":"name"},{"name":"last_updated","type":"time_point"},{"name":"auth","type":"authority"}]},{"name":"producer_authority","fields":[{"name":"producer_name","type":"name"},{"name":"authority","type":"block_signing_authority"}]},{"name":"producer_authority_schedule","fields":[{"name":"version","type":"uint32"},{"name":"producers","type":"producer_authority[]"}]},{"name":"producer_key","fields":[{"name":"producer_name","type":"name"},{"name":"block_signing_key","type":"public_key"}]},{"name":"producer_schedule","fields":[{"name":"version","type":"uint32"},{"name":"producers","type":"producer_key[]"}]},{"name":"protocol_state_v0","fields":[{"name":"activated_protocol_features","type":"activated_protocol_feature[]"}]},{"name":"resource_limits_config_v0","fields":[{"name":"cpu_limit_parameters","type":"elastic_limit_parameters"},{"name":"net_limit_parameters","type":"elastic_limit_parameters"},{"name":"account_cpu_usage_average_window","type":"uint32"},{"name":"account_net_usage_average_window","type":"uint32"}]},{"name":"resource_limits_ratio_v0","fields":[{"name":"numerator","type":"uint64"},{"name":"denominator","type":"uint64"}]},{"name":"resource_limits_state_v0","fields":[{"name":"average_block_net_usage","type":"usage_accumulator"},{"name":"average_block_cpu_usage","type":"usage_accumulator"},{"name":"total_net_weight","type":"uint64"},{"name":"total_cpu_weight","type":"uint64"},{"name":"total_ram_bytes","type":"uint64"},{"name":"virtual_net_limit","type":"uint64"},{"name":"virtual_cpu_limit","type":"uint64"}]},{"name":"resource_limits_v0","fields":[{"name":"owner","type":"name"},{"name":"net_weight","type":"int64"},{"name":"cpu_weight","type":"int64"},{"name":"ram_bytes","type":"int64"}]},{"name":"resource_usage_v0","fields":[{"name":"owner","type":"name"},{"name":"net_usage","type":"usage_accumulator"},{"name":"cpu_usage","type":"usage_accumulator"},{"name":"ram_usage","type":"uint64"}]},{"name":"row","fields":[{"name":"present","type":"bool"},{"name":"data","type":"bytes"}]},{"name":"signed_block","fields":[{"name":"timestamp","type":"block_timestamp_type"},{"name":"producer","type":"name"},{"name":"confirmed","type":"uint16"},{"name":"previous","type":"checksum256"},{"name":"transaction_mroot","type":"checksum256"},{"name":"action_mroot","type":"checksum256"},{"name":"schedule_version","type":"uint32"},{"name":"new_producers","type":"producer_schedule?"},{"name":"header_extensions","type":"extension[]"},{"name":"producer_signature","type":"signature"},{"name":"transactions","type":"transaction_receipt[]"},{"name":"block_extensions","type":"extension[]"}]},{"name":"table_delta_v0","fields":[{"name":"name","type":"string"},{"name":"rows","type":"row[]"}]},{"name":"transaction","fields":[{"name":"expiration","type":"time_point_sec"},{"name":"ref_block_num","type":"uint16"},{"name":"ref_block_prefix","type":"uint32"},{"name":"max_net_usage_words","type":"varuint32"},{"name":"max_cpu_usage_ms","type":"uint8"},{"name":"delay_sec","type":"varuint32"},{"name":"context_free_actions","type":"action[]"},{"name":"actions","type":"action[]"},{"name":"transaction_extensions","type":"extension[]"}]},{"name":"transaction_receipt","fields":[{"name":"status","type":"uint8"},{"name":"cpu_usage_us","type":"uint32"},{"name":"net_usage_words","type":"varuint32"},{"name":"trx","type":"transaction_variant"}]},{"name":"transaction_trace_v0","fields":[{"name":"id","type":"checksum256"},{"name":"status","type":"uint8"},{"name":"cpu_usage_us","type":"uint32"},{"name":"net_usage_words","type":"varuint32"},{"name":"elapsed","type":"int64"},{"name":"net_usage","type":"uint64"},{"name":"scheduled","type":"bool"},{"name":"action_traces","type":"action_trace[]"},{"name":"account_ram_delta","type":"account_delta?"},{"name":"except","type":"string?"},{"name":"error_code","type":"uint64?"},{"name":"failed_dtrx_trace","type":"transaction_trace?"},{"name":"partial","type":"partial_transaction?"}]},{"name":"usage_accumulator_v0","fields":[{"name":"last_ordinal","type":"uint32"},{"name":"value_ex","type":"uint64"},{"name":"consumed","type":"uint64"}]},{"name":"wait_weight","fields":[{"name":"wait_sec","type":"uint32"},{"name":"weight","type":"uint16"}]},{"name":"wasm_config_v0","fields":[{"name":"max_mutable_global_bytes","type":"uint32"},{"name":"max_table_elements","type":"uint32"},{"name":"max_section_elements","type":"uint32"},{"name":"max_linear_memory_init","type":"uint32"},{"name":"max_func_local_bytes","type":"uint32"},{"name":"max_nested_structures","type":"uint32"},{"name":"max_symbol_bytes","type":"uint32"},{"name":"max_module_bytes","type":"uint32"},{"name":"max_code_bytes","type":"uint32"},{"name":"max_pages","type":"uint32"},{"name":"max_call_depth","type":"uint32"}]}],"tables":[{"name":"account","key_names":["name"],"type":"account"},{"name":"actmetadata","key_names":["name"],"type":"account_metadata"},{"name":"code","key_names":["vm_type","vm_version","code_hash"],"type":"code"},{"name":"contracttbl","key_names":["code","scope","table"],"type":"contract_table"},{"name":"contractrow","key_names":["code","scope","table","primary_key"],"type":"contract_row"},{"name":"cntrctidx1","key_names":["code","scope","table","primary_key"],"type":"contract_index64"},{"name":"cntrctidx2","key_names":["code","scope","table","primary_key"],"type":"contract_index128"},{"name":"cntrctidx3","key_names":["code","scope","table","primary_key"],"type":"contract_index256"},{"name":"cntrctidx4","key_names":["code","scope","table","primary_key"],"type":"contract_index_double"},{"name":"cntrctidx5","key_names":["code","scope","table","primary_key"],"type":"contract_index_long_double"},{"name":"global.pty","type":"global_property"},{"name":"generatedtrx","key_names":["sender","sender_id"],"type":"generated_transaction"},{"name":"protocolst","type":"protocol_state"},{"name":"permission","key_names":["owner","name"],"type":"permission"},{"name":"permlink","key_names":["account","code","message_type"],"type":"permission_link"},{"name":"rsclimits","key_names":["owner"],"type":"resource_limits"},{"name":"rscusage","key_names":["owner"],"type":"resource_usage"},{"name":"rsclimitsst","type":"resource_limits_state"},{"name":"rsclimitscfg","type":"resource_limits_config"}],"variants":[{"name":"account","types":["account_v0"]},{"name":"account_metadata","types":["account_metadata_v0"]},{"name":"action_receipt","types":["action_receipt_v0"]},{"name":"action_trace","types":["action_trace_v0","action_trace_v1"]},{"name":"activated_protocol_feature","types":["activated_protocol_feature_v0"]},{"name":"block_signing_authority","types":["block_signing_authority_v0"]},{"name":"chain_config","types":["chain_config_v0","chain_config_v1"]},{"name":"code","types":["code_v0"]},{"name":"contract_index128","types":["contract_index128_v0"]},{"name":"contract_index256","types":["contract_index256_v0"]},{"name":"contract_index64","types":["contract_index64_v0"]},{"name":"contract_index_double","types":["contract_index_double_v0"]},{"name":"contract_index_long_double","types":["contract_index_long_double_v0"]},{"name":"contract_row","types":["contract_row_v0"]},{"name":"contract_table","types":["contract_table_v0"]},{"name":"elastic_limit_parameters","types":["elastic_limit_parameters_v0"]},{"name":"generated_transaction","types":["generated_transaction_v0"]},{"name":"global_property","types":["global_property_v0","global_property_v1"]},{"name":"partial_transaction","types":["partial_transaction_v0"]},{"name":"permission","types":["permission_v0"]},{"name":"permission_link","types":["permission_link_v0"]},{"name":"protocol_state","types":["protocol_state_v0"]},{"name":"request","types":["get_status_request_v0","get_blocks_request_v0","get_blocks_ack_request_v0"]},{"name":"resource_limits","types":["resource_limits_v0"]},{"name":"resource_limits_config","types":["resource_limits_config_v0"]},{"name":"resource_limits_ratio","types":["resource_limits_ratio_v0"]},{"name":"resource_limits_state","types":["resource_limits_state_v0"]},{"name":"resource_usage","types":["resource_usage_v0"]},{"name":"result","types":["get_status_result_v0","get_blocks_result_v0"]},{"name":"table_delta","types":["table_delta_v0"]},{"name":"transaction_trace","types":["transaction_trace_v0"]},{"name":"transaction_variant","types":["checksum256","packed_transaction"]},{"name":"usage_accumulator","types":["usage_accumulator_v0"]},{"name":"wasm_config","types":["wasm_config_v0"]}]})";