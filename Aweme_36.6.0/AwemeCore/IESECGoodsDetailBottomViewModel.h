@class NSArray;

@interface IESECGoodsDetailBottomViewModel : IESECGoodsDetailPageBaseViewModel

@property (copy, nonatomic) NSArray *bottomItemElements;
@property (copy, nonatomic) NSArray *bottomButtonElements;
@property (copy, nonatomic) NSArray *bottomButtonElementsSmallMode;
@property (nonatomic) double containerWidth;

- (void)setupViewModel;
- (void)trackTipsShow;
- (id)buttonDivider;
- (id)bottomMetaModel;
- (BOOL)needScale;
- (id)leftItemsBackground;
- (id)bottomDataModel;
- (double)bottomItemsSpace;
- (double)bottomButtonWeightSum;
- (double)bottomButtonWeightSumSmallMode;
- (void)trackShow:(id)a0;
- (void)trackAddCartGuidePopupShow:(id)a0;
- (void)setupBottomItemElements;
- (void)setupBottomButtonElements;
- (id)bottomItemElementAtIndex:(id)a0;
- (id)bottomButtonElementAtIndex:(id)a0;
- (void)trackShowAddToCart:(id)a0 withExtraParams:(id)a1;
- (void)trackSendGiftButtonShow;
- (void)trackShowBuyNowWithParams:(id)a0 container:(id)a1;
- (void)trackFindSameButtonShow;
- (void)trackJoinMemberButtonShow;
- (void)updateCartNum:(id)a0;
- (BOOL)isLynxBottomContainer;
- (void)trackNoRemindClick:(id)a0;
- (void).cxx_destruct;

@end
