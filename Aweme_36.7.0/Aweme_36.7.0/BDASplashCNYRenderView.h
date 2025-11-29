@class IESLiveVideoGiftController, NSString, BDASplashCNYRenderViewModel;

@interface BDASplashCNYRenderView : BDASplashComplianceBaseSlideView <IESLiveVideoGiftControllerDelegate, BDASplashEggsDelegate>

@property (retain, nonatomic) BDASplashCNYRenderViewModel *viewModel;
@property (retain, nonatomic) IESLiveVideoGiftController *alphaVideoController;
@property (nonatomic) double loadTime;
@property (copy, nonatomic) NSString *liveText;
@property (copy, nonatomic) id /* block */ jumpBlock;
@property (nonatomic) BOOL sendClickImmediately;
@property (nonatomic) BOOL hasFirstFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)addGesture;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)basePanGestureSuccess:(id)a0;
- (BOOL)whetherPostponeSplashView;
- (void)showAlphaVideo;
- (id)createMaskResourceWithInfoList:(id)a0 liveText:(id)a1;
- (void)updateGestureState:(long long)a0;
- (void)renderFail;
- (void)eggsViewDidAppearWithParams:(id)a0;
- (void)eggsViewDidDisappearWithParams:(id)a0;
- (void)eggsViewBreakWithParams:(id)a0;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setupView;

@end
