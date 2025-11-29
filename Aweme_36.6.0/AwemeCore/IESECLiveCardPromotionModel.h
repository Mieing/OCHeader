@class NSString, IESECLiveCardGoodsModel, IESECLiveCardComponentInfoModel;

@interface IESECLiveCardPromotionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveCardGoodsModel *cardGoodsModel;
@property (retain, nonatomic) IESECLiveCardComponentInfoModel *floatWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardInfoJSONTransformer;
+ (id)floatWindowJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
