@class UIWindowScene;

@interface MMWindowViewController : MMUIViewController {
    BOOL _isHidden;
    BOOL _isRequestKeyWindow;
    BOOL _isNeedNavCtrl;
    int _level;
    int _transitionOptions;
    long long _statusBarStyle;
    BOOL _isChangeStatusBar;
}

@property (nonatomic) BOOL isInOutsidePresentation;
@property (nonatomic) BOOL forbidUserInteraction;
@property (nonatomic) BOOL forbidVoiceOverAutoFocus;
@property (nonatomic) BOOL delayVoiceOverAutoFocus;
@property (nonatomic) BOOL shouldHandleStatusBarAppearance;
@property (retain, nonatomic) UIWindowScene *windowScene;
@property (nonatomic) BOOL createNewSceneInVision;

- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateWindowSceneUpTo:(id)a0;
- (void)setWindowLevel:(int)a0;
- (void)hideNavBar;
- (void)setStatusBarStyle:(long long)a0;
- (void)show;
- (void)showWithAnimated:(int)a0;
- (void)showWithAnimated:(int)a0 inWindow:(id)a1;
- (void)showWithAnimated:(int)a0 inWindow:(id)a1 showEndEditing:(BOOL)a2;
- (id)presentContentView;
- (long long)preferredStatusBarStyle;
- (BOOL)isClassShowing;
- (BOOL)isObjShowing;
- (void)showWithAnimated:(int)a0 willCloseAfter:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)DismissMyselfAnimated:(BOOL)a0;
- (void)hide;
- (void)hideWithAnimated:(int)a0;
- (BOOL)supportAdjustOrientationMask;
- (void)notifySupportedOrientationMaskShouldAdjust;
- (void)dealloc;
- (void).cxx_destruct;

@end
