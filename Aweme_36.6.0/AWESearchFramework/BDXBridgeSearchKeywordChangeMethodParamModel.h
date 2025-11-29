@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDXBridgeSearchKeywordChangeMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *searchFrom;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *query_id;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *client_engine_extra;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *group_id;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *clickMoreMethod;
@property (copy, nonatomic) NSString *presearchID;
@property (copy, nonatomic) NSString *last_search_group_id;
@property (copy, nonatomic) NSString *last_search_doc_type;
@property (copy, nonatomic) NSString *trans_event_extra;
@property (copy, nonatomic) NSString *target_poi_id;
@property (copy, nonatomic) NSString *address_panel_schema;
@property (copy, nonatomic) NSString *client_server_extra;
@property (copy, nonatomic) NSString *client_server_pass_for_once;
@property (copy, nonatomic) NSString *client_server_params;
@property (copy, nonatomic) NSDictionary *extra_info;
@property (copy, nonatomic) NSDictionary *search_hybrid_info;
@property (copy, nonatomic) NSString *search_pass_params_struct;
@property (copy, nonatomic) NSString *searchScene;
@property (retain, nonatomic) NSArray *previewed_aweme_list;
@property (copy, nonatomic) NSDictionary *filter_selected;
@property (nonatomic) long long type;
@property (nonatomic) long long open_new_page;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
