@class NSArray, NSString;

@interface IESECMallImagePrefetchConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *firstScreenConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstScreenConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
