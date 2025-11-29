@class NSString, IESECGoodsDetailCampaignPurchaseQualificationModel;

@interface IESECGoodsDetailControlModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL storeIcon;
@property (nonatomic) BOOL wantIcon;
@property (nonatomic) BOOL shoppingCart;
@property (nonatomic) BOOL addToCartDisable;
@property (nonatomic) BOOL guessYouLike;
@property (nonatomic) BOOL showDiscountLabels;
@property (nonatomic) BOOL shouldShowshare;
@property (nonatomic) BOOL serviceIcon;
@property (nonatomic) BOOL storeTagStyle;
@property (retain, nonatomic) IESECGoodsDetailCampaignPurchaseQualificationModel *campaignPurchaseQualification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
