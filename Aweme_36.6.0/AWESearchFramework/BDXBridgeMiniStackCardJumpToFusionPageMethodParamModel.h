@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeMiniStackCardJumpToFusionPageMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *searchFrom;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *query_id;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *client_engine_extra;
@property (copy, nonatomic) NSString *group_id;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *clickMoreMethod;
@property (copy, nonatomic) NSString *presearchID;
@property (copy, nonatomic) NSString *last_search_group_id;
@property (copy, nonatomic) NSString *last_search_doc_type;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSArray *previewed_aweme_list;
@property (copy, nonatomic) NSDictionary *filter_selected;
@property (nonatomic) long long open_new_page;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
