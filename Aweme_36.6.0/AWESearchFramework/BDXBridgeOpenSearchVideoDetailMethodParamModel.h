@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDXBridgeOpenSearchVideoDetailMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *page_feed;
@property (retain, nonatomic) NSNumber *card_rank;
@property (copy, nonatomic) NSString *sessionid;
@property (retain, nonatomic) NSNumber *loadmore;
@property (retain, nonatomic) NSNumber *aweme_index;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (copy, nonatomic) NSDictionary *extra_params;
@property (retain, nonatomic) NSNumber *load_search_result;
@property (retain, nonatomic) id load_more_info;
@property (copy, nonatomic) NSString *mix_id;
@property (retain, nonatomic) NSNumber *combinate_card_feed;
@property (copy, nonatomic) NSDictionary *router_params;
@property (retain, nonatomic) NSNumber *block_innerdata_callback;
@property (retain, nonatomic) NSArray *id_list;
@property (nonatomic) long long type;
@property (nonatomic) long long scene;

+ (id)typeJSONTransformer;
+ (id)sceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
