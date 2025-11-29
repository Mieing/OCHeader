@class NSArray, NSDictionary, NSString;

@interface AWEShareSpecifiedPlatformSDKSetting : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL SDKEnable;
@property (copy, nonatomic) NSArray *targetShareTypes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)targetShareTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
