@class MMWindowMgrObject, NSString;
@protocol MMUIWindowPassThroughDelegate;

@interface MMUIWindow : MMUIBaseWindow <IVOIPWindowExt>

@property (nonatomic) BOOL disableQuickReplyPush;
@property (weak, nonatomic) id<MMUIWindowPassThroughDelegate> passthroughDelegate;
@property (nonatomic) double m_lastWindowLevel;
@property (nonatomic) int mmWindowLevel;
@property (nonatomic) BOOL canMixWithOther;
@property (nonatomic) BOOL shouldHandleStatusBarAppearance;
@property (weak, nonatomic) MMWindowMgrObject *rootWindowMgrObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)shouldShowQuickReplyPush:(id)a0;
- (void)onVoipWindowDidAppear;
- (void)onVoipWindowDisappear;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithWindowScene:(id)a0;
- (void)commonInit;
- (void)dealloc;
- (void)becomeKeyWindow;
- (void)showWindowFrom:(int)a0 withTopOffset:(double)a1;
- (void)showWindowFrom:(int)a0 withTopOffset:(double)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)hideWindowTo:(int)a0 withTopOffset:(double)a1;
- (void)hideWindowTo:(int)a0 withTopOffset:(double)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)setShowFrameWithTopOffset:(double)a0;
- (void)setHideFrame:(int)a0 withTopOffset:(double)a1;
- (void)SetWindowLevel:(int)a0;
- (void)setWindowLevel:(double)a0;
- (void)animateFadeoutWithDuration:(double)a0 completion:(id /* block */)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)remoteControlReceivedWithEvent:(id)a0;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)onWindowSceneSizeChanged;
- (void).cxx_destruct;

@end
