@class NSString, NSDictionary, UIView, BDASplashComplianceFactory, NSObject;
@protocol BDASplashComplianceViewHolder;

@interface AWECommerceSplashMultiStyleView : AWECommerceSplashStyleBaseView <BDASplashComplianceBaseDelegate, BDASplashComplianceViewHolderDelegate>

@property (retain, nonatomic) BDASplashComplianceFactory *factory;
@property (retain, nonatomic) NSObject<BDASplashComplianceViewHolder> *viewHolder;
@property (retain, nonatomic) UIView *ttStyleView;
@property (retain, nonatomic) UIView *eggTransitionView;
@property (nonatomic) unsigned long long currentTiming;
@property (nonatomic) double roundAreaDuration;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (copy, nonatomic) NSDictionary *trackAdExtraDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (id)createCubicBezierAnimationWith:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashInvalidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashJumpWithParams:(id)a0 animationType:(long long)a1;
- (void)splashTrackEventWithLabel:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashTrackALogWithInfo:(id)a0;
- (void)splashTrackNoAdEvent:(id)a0 params:(id)a1;
- (id)splashGetViewForShowingEggs;
- (void)gestureStateDidChanged:(long long)a0;
- (id)splashImageDataForKey:(id)a0;
- (id)generateSplashStyleConfigWithModel:(id)a0;
- (id)clickAreaToComplianceArea:(id)a0;
- (void)startButtonFinishAnimation;
- (void)startRoundAreaStyleTransitionAnimation;
- (void)startGoodsCardTransitionAnimation;
- (void)startNormalSlideButtonTransitionAnimation;
- (void)startGoodsStoreBaseTransitionAnimation;
- (void)startEggTransitionAnimation;
- (void)startDirectLiveTransitionAnimation;
- (void)onSkipBtnClicked;
- (void)hideWithAnimation;
- (id)createRoundAreaViewAnimationWithKeyPath:(id)a0 duration:(double)a1;
- (void)startGoodsStoreLabelTransitionAnimationWithView:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 scale:(id)a2 scaleY:(id)a3 originContainer:(id)a4 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (BOOL)startGoodsAnimation:(int)a0 withFrames:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 splashControls:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getGoodsCardFrameWithKey:(id)a0 framesDic:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)goodsCardAnimation:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addCustomView;
- (void)triggerSplashActionWithTiming:(unsigned long long)a0;
- (BOOL)canUseSplashAutoMultiStyle;
- (BOOL)hasDowngraded;
- (BOOL)isInEggTransition;
- (void)startSplashVideoScaleAnimation;
- (void).cxx_destruct;
- (void)reset;

@end
