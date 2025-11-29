@class UIColor, NSString, UIView, UIButton;
@protocol DUXLoadingToastDelegate, IESIMLoadingToastDelegate;

@interface DUXLoadingToast : DUXToast <IESIMToastLoadingProtocol, ACCDUXLoadingInstance, DUXProgressViewProtocol, DUXLoadingViewProtocol>

@property (weak, nonatomic) id<IESIMLoadingToastDelegate> iesimDelegate;
@property (nonatomic) BOOL showCloseButton;
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
@property (nonatomic) unsigned long long loadingStyle;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *closeView;
@property (weak, nonatomic) id<DUXLoadingToastDelegate> delegate;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) struct CGSize { double width; double height; } closeButtonInteractiveSize;
@property (retain, nonatomic) UIColor *closeIconColor;
@property (copy, nonatomic) id /* block */ awe_closeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnlargeType:(unsigned long long)a0;
- (void)showOnView:(id)a0 withCover:(BOOL)a1 withCenterPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithLoadingStyle:(unsigned long long)a0 text:(id)a1;
- (void)showOnView:(id)a0;
- (double)getProgress;
- (void)updateProgress:(double)a0 inDuration:(double)a1;
- (void)stopLoadingAnimated:(BOOL)a0;
- (void)showOnView:(id)a0 withCenterPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)progressLoadingView;
- (void)setAcclt_loadingStartTime:(double)a0;
- (double)acclt_loadingStartTime;
- (long long)acclt_scene;
- (void)setAcclt_scene:(long long)a0;
- (BOOL)acclt_cancellable;
- (void)setAcclt_cancellable:(BOOL)a0;
- (void)setupIconView;
- (id)dualBallToLightLoadingView;
- (void)setupCloseButtonView;
- (id)dualBallLoadingView;
- (void)close;
- (void).cxx_destruct;
- (void)resetProgress;
- (void)startLoading;
- (void)stopLoading;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateProgress:(double)a0;

@end
