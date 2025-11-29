@class TTAdSplashModel, NSString, BDASplashView, UIView;
@protocol BDASplashControllerViewProtocol;

@interface BDASplashControllerView : UIView <BDASplashViewProtocol>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *fakeLaunchView;
@property (retain, nonatomic) BDASplashView *splashView;
@property (retain, nonatomic) TTAdSplashModel *model;
@property (weak, nonatomic) id<BDASplashControllerViewProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alloc;
+ (id)getFakeLaunchViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)splashViewReadyToShow;
- (void)splashViewClickedWithExtra:(id)a0 animationBlock:(id /* block */)a1;
- (void)splashViewShowFinishedAnimation:(BOOL)a0;
- (void)removeBgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setupView;

@end
