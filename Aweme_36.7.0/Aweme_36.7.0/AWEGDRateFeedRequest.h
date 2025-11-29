@class NSString, NSArray;

@interface AWEGDRateFeedRequest : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long scene_type;
@property (copy, nonatomic) NSString *poi_id;
@property (copy, nonatomic) NSString *spu_id;
@property (nonatomic) long long feed_mode;
@property (copy, nonatomic) NSString *next;
@property (retain, nonatomic) NSArray *remove_rate_id;
@property (copy, nonatomic) NSString *top_rate_id;
@property (nonatomic) long long top_priority;
@property (nonatomic) BOOL need_show_tags;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *poi_enter_id;
@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *enter_item_id;
@property (nonatomic) long long location_permission;
@property (copy, nonatomic) NSString *route_url;
@property (nonatomic) long long show_rate_digg_hint;
@property (nonatomic) long long option_type;
@property (nonatomic) long long sort_by;
@property (nonatomic) long long filter_by;
@property (copy, nonatomic) NSString *impression_id;
@property (copy, nonatomic) NSString *ugc_mob_params;
@property (copy, nonatomic) NSString *module_type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scene_typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
