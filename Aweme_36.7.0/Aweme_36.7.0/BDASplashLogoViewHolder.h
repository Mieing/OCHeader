@class NSString, BDASplashLogoBaseView, BDASplashLogoViewModel;
@protocol BDASplashLogoViewHolderDelegate;

@interface BDASplashLogoViewHolder : NSObject <BDASplashLogoBaseDelegate>

@property (retain, nonatomic) BDASplashLogoBaseView *view;
@property (weak, nonatomic) id<BDASplashLogoViewHolderDelegate> delegate;
@property (retain, nonatomic) BDASplashLogoViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1 delegate:(id)a2;
- (id)getView;
- (void)skipButtonClicked;
- (void)trackAdEventWithLabel:(id)a0 adExtra:(id)a1;
- (void)addAccessibilityElement:(id)a0;
- (void)skipButtonTimerTimeOut;
- (void)cancelPerformDelayTask;
- (void)setRemainedSeconds:(long long)a0;
- (void)setUpSkipCountDownTimerIfNeededWithDiffTime:(double)a0;
- (void)skipCountDownTimerFired:(id)a0;
- (void)cleanSkipTimer;
- (void)updateSkipTimerWithDisplayTime:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
