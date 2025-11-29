@class NSArray, NSString, NSDictionary;

@interface IESLiveAnchorInteractiveBaseExtra : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) long long gameId;
@property (retain, nonatomic) NSArray *supportLiveScene;
@property (retain, nonatomic) NSArray *supportLiveEntrance;
@property (nonatomic) long long openType;
@property (copy, nonatomic) NSString *playRule;
@property (copy, nonatomic) NSDictionary *bubbleConfig;
@property (copy, nonatomic) NSDictionary *breathingLightConfig;
@property (copy, nonatomic) NSDictionary *redDotConfig;
@property (nonatomic) long long pluginType;
@property (nonatomic) long long singleMonthPrice;
@property (nonatomic) long long subscribeType;
@property (copy, nonatomic) NSString *musicInfoRequirement;
@property (nonatomic) long long versionType;
@property (copy, nonatomic) NSString *relateEffectId;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long engineType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)automaticallyDefaultMapping;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
