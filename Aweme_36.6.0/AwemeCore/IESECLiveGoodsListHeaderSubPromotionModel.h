@class IESECLiveGoodsBackGroundLeftModel, NSString, IESECLiveGoodsListHeaderPromotionComponentModel, NSNumber;

@interface IESECLiveGoodsListHeaderSubPromotionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *background;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) IESECLiveGoodsBackGroundLeftModel *leftTitleComponent;
@property (retain, nonatomic) IESECLiveGoodsListHeaderPromotionComponentModel *leftComponent;
@property (retain, nonatomic) IESECLiveGoodsListHeaderPromotionComponentModel *rightComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
