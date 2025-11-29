@class NSString, BDASplashComplianceContainerView, BDASplashComplianceBaseView, BDASplashComplianceModel;
@protocol BDASplashViewModelProtocol, BDASplashComplianceViewHolderDelegate;

@interface BDASplashComplianceViewHolder : NSObject <BDASplashComplianceViewHolder, BDASplashComplianceViewDelegate>

@property (retain, nonatomic) BDASplashComplianceContainerView *containerView;
@property (retain, nonatomic) BDASplashComplianceBaseView *complianceView;
@property (retain, nonatomic) BDASplashComplianceModel *complianceModel;
@property (retain, nonatomic) BDASplashComplianceModel *demotionModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) id<BDASplashViewModelProtocol> checkModel;
@property (nonatomic) BOOL splashViewHasEnded;
@property (copy, nonatomic) id /* block */ disappearBlock;
@property (nonatomic) BOOL isPrepared;
@property (nonatomic) long long failedReason;
@property (weak, nonatomic) id<BDASplashComplianceViewHolderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseComplianceView;
- (void)showComplianceView;
- (void)stopComplianceView;
- (long long)getComplianceViewState;
- (void)updateGuideViewState:(BOOL)a0;
- (id)getComplianceView;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashInvalidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashJumpWithParams:(id)a0 animationType:(long long)a1;
- (void)splashTrackEventWithLabel:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashTrackALogWithInfo:(id)a0;
- (void)splashTrackNoAdEvent:(id)a0 params:(id)a1;
- (BOOL)splashAddViewToTheTop:(id)a0;
- (id)splashGetViewForShowingEggs;
- (void)splashShakeSettings;
- (void)gestureStateDidChanged:(long long)a0;
- (void)splashOptionalDataForKey:(id)a0 completionBlock:(id /* block */)a1;
- (long long)getComplianceType;
- (id)getSpecificControlsForAnimation;
- (void)applyGreyThemeWithImage:(id)a0;
- (void)splashAsyncRenderFailed;
- (id)getInteractionView;
- (void)splashFinish:(BOOL)a0;
- (void)loadAsyncViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1 demotionModel:(id)a2;
- (void)loadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (id)createViewModelWithModel:(id)a0;
- (id)adExtraDataForComplianceType;
- (long long)getComplianceGestureState;
- (void)extendedSplashView:(id /* block */)a0;
- (void).cxx_destruct;

@end
