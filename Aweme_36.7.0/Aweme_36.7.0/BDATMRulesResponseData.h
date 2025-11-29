@class NSString, BDATMRulesResponseMeta;

@interface BDATMRulesResponseData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long appId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSString *atmConfigJson;
@property (retain, nonatomic) BDATMRulesResponseMeta *meta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)metaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
