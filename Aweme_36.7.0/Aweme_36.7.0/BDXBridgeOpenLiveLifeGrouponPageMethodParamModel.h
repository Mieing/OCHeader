@class NSString, NSNumber, BDXBridgeOpenLiveLifeGrouponPageParams;

@interface BDXBridgeOpenLiveLifeGrouponPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *page_source;
@property (retain, nonatomic) NSNumber *page_type;
@property (retain, nonatomic) BDXBridgeOpenLiveLifeGrouponPageParams *params;

+ (id)requiredKeyPaths;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
