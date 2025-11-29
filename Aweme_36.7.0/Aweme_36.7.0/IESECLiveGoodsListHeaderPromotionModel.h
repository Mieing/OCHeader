@class NSString, IESECLiveGoodsListHeaderSubPromotionModel;

@interface IESECLiveGoodsListHeaderPromotionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long promotionType;
@property (retain, nonatomic) IESECLiveGoodsListHeaderSubPromotionModel *vertical;
@property (retain, nonatomic) IESECLiveGoodsListHeaderSubPromotionModel *horizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
