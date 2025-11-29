@class NSArray, NSDictionary, NSString;

@interface AWEIMActivityDynamicResourceResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *actionBarConfs;
@property (copy, nonatomic) NSArray *lightInteractionConfs;
@property (copy, nonatomic) NSArray *lightInteractionConfsV2;
@property (copy, nonatomic) NSArray *tickleResourceConfs;
@property (copy, nonatomic) NSDictionary *intervene;
@property (copy, nonatomic) NSDictionary *easy_emoji_conf;
@property (copy, nonatomic) NSDictionary *redpacket_conf;
@property (copy, nonatomic) NSArray *easy_emoji;
@property (copy, nonatomic) NSArray *keyword_animate;
@property (copy, nonatomic) NSArray *falling_animate;
@property (copy, nonatomic) NSArray *keyword_conf;
@property (nonatomic) BOOL xmoji_uploaded;
@property (copy, nonatomic) NSArray *animateResource;
@property (copy, nonatomic) NSArray *actionbar_conf;
@property (copy, nonatomic) NSArray *specialKeywordConf;
@property (copy, nonatomic) NSArray *light_interaction_conf;
@property (copy, nonatomic) NSArray *light_interaction_conf_v2;
@property (copy, nonatomic) NSDictionary *backupChatTheme;
@property (copy, nonatomic) NSArray *tickle_resource_confs;
@property (copy, nonatomic) NSDictionary *bubbleResourceVersionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
