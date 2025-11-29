@class IESECVideoGirdleViewModel, IESECGoodsDetailParameters, IESECGoodsBottomActionHelper, IESECInnerFlowProductModel;

@interface IESECImmersiveProductCardViewModel : NSObject

@property (retain, nonatomic) IESECInnerFlowProductModel *model;
@property (retain, nonatomic) IESECVideoGirdleViewModel *girdleViewModel;
@property (retain, nonatomic) IESECGoodsDetailParameters *params;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECGoodsBottomActionHelper *actionHelper;
@property (readonly, nonatomic) IESECGoodsDetailParameters *nextParams;
@property (weak, nonatomic) id delegate;

+ (id)goodsParamsWithModelJsonString:(id)a0 params:(id)a1;

- (id)baseParams;
- (id)commonTrackParams;
- (void)track:(id)a0 params:(id)a1;
- (id)containerTracker;
- (id)composeEntranceInfoFormDict:(id)a0 scene:(id)a1;
- (void)trackClickCommentButton;
- (void)addCart;
- (id)configStoreSourceParams;
- (id)videoGuideSearchBCM;
- (void)trackShowStoreEntrance;
- (void)trackShowCommentButton;
- (void)trackShowWishButton;
- (void)entryActionWithModel:(id)a0 button:(id)a1;
- (void)buyButtonClickWithModel:(id)a0;
- (void)openProductDetail;
- (void)trackClickProductWithArea:(long long)a0;
- (void)trackClickEcomInflowCardWithArea:(long long)a0;
- (id)commonTrackParamsForLargeCard;
- (id)containerVideoTracker;
- (void)trackShowProduct;
- (void)trackShowEcomInflowCard;
- (void)trackInflowLowPriceEntranceShowWithLocation:(id)a0 btm:(id)a1;
- (void)trackInflowLowPriceEntranceClickWithLocation:(id)a0 btm:(id)a1;
- (void)trackLampShow;
- (id)clickProductAreaStringWithArea:(long long)a0;
- (void)trackClickStoreEntrance;
- (id)parseProductModel:(id)a0;
- (void)updateGirdleViewModelWithCurrentModel;
- (void)parseOldProductModel:(id)a0;
- (id)p_buildParamsForBottomActionHelper;
- (void)goToShopUrl:(id)a0;
- (void)bookmark:(id)a0;
- (void)buy;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;

@end
