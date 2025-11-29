@class UIStackView, NSString, UIButton, UIView, AWESharePanelPageContext, NSMutableArray;
@protocol AWESharePanelSheet, AWEInnerNotificationController;

@interface AWESharePanelViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency, AWESharePanel, AWEShareListPanelProtocol, AWESharePanelContainerAction>

@property (retain, nonatomic) AWESharePanelPageContext *componentContext;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) id<AWEInnerNotificationController> notificationController;
@property (nonatomic) BOOL dismissInitiative;
@property (retain, nonatomic) NSMutableArray *dismissHandlers;
@property (retain, nonatomic) NSMutableArray *willDismissHandlers;
@property (weak, nonatomic) id<AWESharePanelSheet> sheet;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ dismissPassiveHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) unsigned long long styleOptions;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (weak, nonatomic) UIButton *shareButton;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)awe_themeReload;
- (void)addDismissedHandler:(id /* block */)a0;
- (void)addWillDismissHandler:(id /* block */)a0;
- (void)dismissSharePanelWithClickType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateSheetWithContentHeight:(double)a0 keyboardHeight:(double)a1 animated:(BOOL)a2;
- (void)updateSheetWithoutLayoutWithContentHeight:(double)a0 keyboardHeight:(double)a1 animated:(BOOL)a2;
- (void)updateSheetUI:(id)a0;
- (id)panelDismissTapView;
- (double)getTotalHeight;
- (double)getTotalHeightWithout:(id)a0;
- (id)initWithShareContext:(id)a0 displayType:(unsigned long long)a1 customConfiguration:(id)a2;
- (void)didClickMaskArea;
- (void)createBigFontAdapter;
- (void)configShareContextCommonParams;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)currentBackgroundColor;
- (void)viewWillAppear:(BOOL)a0;
- (id)colorTheme;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
