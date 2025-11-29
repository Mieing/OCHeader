@class UIView, NSString, UILongPressGestureRecognizer, WAPopOverView, WANavAlertTitleView, MMUIView, UIButton, WAPopOverTaskBarlogic, MMUILabel, WAWebViewController, MMUIActivityIndicatorView;
@protocol WAWebViewMutiFuncMenuViewDelegate, WAWebViewMutiFuncMenuViewDataSource;

@interface WAWebViewMutiFuncMenuView : MMUIView <WANavAlertTitleViewDelegate> {
    NSString *_normalLastNavTitle;
    MMUILabel *_normalTitleView;
    WANavAlertTitleView *_alertTitleView;
    BOOL _isActivityIndicatorAnimating;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUIView *_leftButton;
    unsigned long long _leftBtnType;
    UIView *_menuView;
    BOOL _isMenuHidden;
    UIButton *_customRightButton;
    UILongPressGestureRecognizer *_moreLongPressRecognizer;
    BOOL _isTrigerMoreLongPress;
    UILongPressGestureRecognizer *_longPressRecognizer;
    WAPopOverTaskBarlogic *_popOverLogic;
    WAPopOverView *_popOverView;
    double _lastSystemNavigationBarHeight;
}

@property (weak, nonatomic) id<WAWebViewMutiFuncMenuViewDelegate> delegate;
@property (weak, nonatomic) WAWebViewController *webview;
@property (weak, nonatomic) id<WAWebViewMutiFuncMenuViewDataSource> dataSource;
@property (nonatomic) long long navMode;
@property (nonatomic) long long contentMode;
@property (nonatomic) BOOL canShowShare;
@property (nonatomic) BOOL needAdaptIpad;
@property (nonatomic) BOOL includeStatusBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)barReturnButtonLeftMarginCurOri;
+ (double)barHomeButtonLeftMarginCurOri;
+ (double)menuViewDefaultWidth;
+ (double)menuViewHeightCurOri;
+ (BOOL)shouldUseSmallMenu;
+ (double)getMenuOriginY;
+ (double)getMenuOriginYIncludeStatusBar:(BOOL)a0;
+ (double)getMenuOriginX:(double)a0 MenuWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMenuViewWithWebContentMode:(long long)a0 navMode:(long long)a1;
- (void)layoutSubviews;
- (void)setMenuNavBackgroundColor:(id)a0;
- (void)setGradientBackground;
- (void)setMenuNavTitle:(id)a0;
- (void)setMenuViewCapsuleHidden:(BOOL)a0;
- (void)setMenuTitleViewLoading:(BOOL)a0;
- (id)getMenuMoreButton;
- (void)alert;
- (double)getStatusBarHeight;
- (double)getInnerMenuOriginY;
- (double)getInnerMenuOriginYIncludeStatusBar:(BOOL)a0;
- (void)fsnormal_updateContent;
- (void)adjustOverallSizeToAdaptIpadWithOriginalFontSize:(double)a0;
- (void)goHome;
- (void)resetMenuViewIcon;
- (void)fsnormal_layoutContent;
- (void)fsmenu_updateContent;
- (id)copyMenuView;
- (void)onReturn;
- (id)genMenuView;
- (BOOL)isSupportVisualEffect;
- (id)pluginVideoPlayer;
- (BOOL)shouldShowAlertTitle;
- (BOOL)shouldShowAlertTitleEntryBtn;
- (id)genReturnBtn:(id)a0;
- (id)genHomeBtn:(id)a0;
- (id)genCloseBtn:(id)a0;
- (void)setCustomRightButton:(id)a0 accessibilityLabel:(id)a1;
- (void)onCustomButtonClick:(id)a0;
- (void)updateLeftBtnType;
- (void)onNavAlertTitleViewEntryBtnClicked:(id)a0;
- (BOOL)shouldShowEntryBtnOnNavAlertTitleView:(id)a0;
- (void).cxx_destruct;

@end
