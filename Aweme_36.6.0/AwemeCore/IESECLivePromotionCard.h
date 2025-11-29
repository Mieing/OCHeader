@class UIView, IESECLivePromotionCardBusinessParams, IESECLiveGoodsViewModel, IESECLivePromotionCardConfigModel, NSString, IESECLivePromotionCardJumpHandler, IESECLivePromotionCardTracker, IESECLiveContext;
@protocol IESECLivePromotionCardBusinessDelegate, IESECLivePromotionCardBusinessParamsDelegate, IESECLivePromotionCardViewProtocol;

@interface IESECLivePromotionCard : NSObject <IESECLivePromotionCardViewActionDelegate>

@property (retain, nonatomic) UIView<IESECLivePromotionCardViewProtocol> *cardView;
@property (retain, nonatomic) IESECLivePromotionCardJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLivePromotionCardTracker *cardTracker;
@property (retain, nonatomic) IESECLivePromotionCardBusinessParams *businessParams;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessDelegate> delegate;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessParamsDelegate> bizParamsDelegate;
@property (retain, nonatomic) IESECLivePromotionCardConfigModel *cardConfigModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGoodsModel:(id)a0;

- (id)getView;
- (void)reportGoodsShowEvent;
- (void)didShowPromotionCardView:(id)a0 areaType:(long long)a1 extraInfo:(id)a2;
- (void)didClickPromotionCardView:(id)a0 areaType:(long long)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
- (void)updateCountDownModule:(id)a0;
- (void)updatePromotionCardWithGoodsViewModel:(id)a0;
- (id)initWithLiveContext:(id)a0 config:(id)a1;
- (id)p_updateSearchParams:(id)a0;
- (BOOL)p_useBizCardAction;
- (void)p_didClick:(id)a0 withEvent:(id)a1;
- (void)p_forceShowDisclaimer:(long long)a0 extraInfo:(id)a1 confirmBlock:(id /* block */)a2 cancleBlock:(id /* block */)a3;
- (void)p_clickWithModel:(id)a0 andAreaType:(long long)a1 action:(id /* block */)a2;
- (void)updatePromotionCardWithUIConfig:(id)a0;
- (void)p_noticeBuyIntension;
- (BOOL)p_shouldRequestCheck:(id)a0;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeBlankWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeBuyButtonWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeAddCartButtonWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeAddCartStepperWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeSubButtonWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeReplayButtonWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeAskExplainWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeComboBuyWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeGivenProductWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaTypeFindSimilarWithEvent:(id)a0 cardView:(id)a1;
- (void)p_didClick_IESECLivePromotionCardViewAreaType3DWithEvent:(id)a0 cardView:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
