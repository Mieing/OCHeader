@class NSString, IESECListKitBackgroundPromoModel, NSDictionary, IESECListKitBackgroundExtraModel;

@interface IESECListKitBackgroundModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECListKitBackgroundPromoModel *light;
@property (retain, nonatomic) IESECListKitBackgroundPromoModel *dark;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) BOOL disableDarkmodeGradientSwitch;
@property (retain, nonatomic) IESECListKitBackgroundExtraModel *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)promoLightJSONTransformer;
+ (id)promoDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)extraDataJSONTransformer;

- (void).cxx_destruct;

@end
