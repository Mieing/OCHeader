@class NSString, LOTAnimationView, UILabel, UIView;
@protocol AWESplashFakeLaunchScreenView, AWEAwesomeSplashLiveCellAccessoryViewDelegate;

@interface AWEAwesomeSplashLiveCellAccessoryView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *skipAdLabel;
@property (retain, nonatomic) UIView *enterLiveBackgroundView;
@property (retain, nonatomic) UIView *enterLiveView;
@property (retain, nonatomic) UILabel *enterLiveLabel;
@property (retain, nonatomic) LOTAnimationView *liveAnimationView;
@property (retain, nonatomic) UIView<AWESplashFakeLaunchScreenView> *fakeLaunchScreenView;
@property (weak, nonatomic) id<AWEAwesomeSplashLiveCellAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeFakeLaunchScreen;
- (void)showFakeLaunchScreen;
- (void)panGR:(id)a0;
- (void)enterLiveViewTapGR;
- (void)skipAdLabelTapGR;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupSubviews;

@end
