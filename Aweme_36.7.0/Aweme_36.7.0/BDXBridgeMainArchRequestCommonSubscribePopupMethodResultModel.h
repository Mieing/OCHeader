@class BDXBridgeMainArchRequestCommonSubscribePopupServiceSubscribeInfo;

@interface BDXBridgeMainArchRequestCommonSubscribePopupMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeMainArchRequestCommonSubscribePopupServiceSubscribeInfo *serviceSubscribeInfo;

+ (id)serviceSubscribeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
