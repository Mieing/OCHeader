@class IESECGoodsDetailParameters, IESECURLModel, IESECFeedResourceCardCouponModel, IESECFeedResourceCardShopModel, IESECFeedResourceCardPanelsModel, NSString, IESECFeedResourceCardLynxModel, IESECFeedResourceCardFrequencyControlModel, IESECFeedResourceCardLynxCommonModel, IESECFeedResourceCardButtonModel, IESECFeedResourceCardHeaderModel, IESECFeedResourceCardWindowModel, IESECFeedResourceCardListModel, IESECFeedResourceCardSearchModel;

@interface IESECFeedResourceCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long cardType;
@property (nonatomic) long long insertPosition;
@property (retain, nonatomic) IESECURLModel *cardBackgroundImage;
@property (retain, nonatomic) IESECFeedResourceCardHeaderModel *headerNode;
@property (retain, nonatomic) IESECFeedResourceCardWindowModel *windowNode;
@property (retain, nonatomic) IESECFeedResourceCardPanelsModel *panelsNode;
@property (retain, nonatomic) IESECFeedResourceCardShopModel *shopNode;
@property (retain, nonatomic) IESECFeedResourceCardButtonModel *buttonNode;
@property (retain, nonatomic) IESECFeedResourceCardCouponModel *couponNode;
@property (retain, nonatomic) IESECFeedResourceCardLynxModel *lynxNode;
@property (retain, nonatomic) IESECFeedResourceCardListModel *listNode;
@property (retain, nonatomic) IESECFeedResourceCardSearchModel *searchNode;
@property (retain, nonatomic) IESECFeedResourceCardFrequencyControlModel *showFrequencyControl;
@property (retain, nonatomic) IESECFeedResourceCardFrequencyControlModel *clickFrequencyControl;
@property (retain, nonatomic) IESECGoodsDetailParameters *goodsDetailParameter;
@property (copy, nonatomic) NSString *sessionTime;
@property (nonatomic) long long abvpos;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *searchProductId;
@property (nonatomic) long long guessIndex;
@property (copy, nonatomic) NSString *noFrequencyControl;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *mallEnterFrom;
@property (retain, nonatomic) IESECFeedResourceCardLynxCommonModel *lynxCommonCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showFrequencyControlJSONTransformer;
+ (id)clickFrequencyControlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
