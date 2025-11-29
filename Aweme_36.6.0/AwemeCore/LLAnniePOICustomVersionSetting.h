@class NSArray, NSString;

@interface LLAnniePOICustomVersionSetting : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *channelWithBizcode;
@property (nonatomic) BOOL enableRequestVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)channelWithBizcodeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
