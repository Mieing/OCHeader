@class NSString, DUXLoadingParticleView;
@protocol AWEUILoadingViewDelegate;

@interface AWEUILoadingView : UIView <IESECUILoadingViewProtocol, RTVLoadingView, IESIMLoadingViewProtocol, ACCLoadingViewProtocol, AWEUILoadingViewProtocol>

@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double acclt_dalay;
@property (nonatomic) BOOL acclt_blockUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) DUXLoadingParticleView *duxLoadingView;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<AWEUILoadingViewDelegate> delegate;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aDUXCommonAdapterClass;

- (void)dismissWithAnimated:(BOOL)a0;
- (id)initWithDisableUserInteraction;
- (id)initWithBackground;
- (id)initWithBackgroundAndDisableUserInteraction;
- (void)setupUIWithBackground:(BOOL)a0;
- (id)aDUXCommonAdapter;
- (void)setAcclt_loadingStartTime:(double)a0;
- (double)acclt_loadingStartTime;
- (long long)acclt_scene;
- (void)setAcclt_scene:(long long)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)addObservers;

@end
