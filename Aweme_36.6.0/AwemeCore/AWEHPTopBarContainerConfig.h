@class NSArray, NSString;

@interface AWEHPTopBarContainerConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *leftCTAConfigs;
@property (copy, nonatomic) NSArray *rightCTAConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftCTAConfigsJSONTransformer;
+ (id)rightCTAConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
