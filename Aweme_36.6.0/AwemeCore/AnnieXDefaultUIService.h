@class AnnieXNavigataionBarItem, NSString, UIActivityIndicatorView, AnnieXTitleContentView;

@interface AnnieXDefaultUIService : NSObject <AnnieXUIServiceProtocol>

@property (retain, nonatomic) AnnieXNavigataionBarItem *backItem;
@property (retain, nonatomic) AnnieXNavigataionBarItem *closeItem;
@property (retain, nonatomic) AnnieXTitleContentView *titleView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (BOOL)useAnnieXNavigationBarWithURL:(id)a0 context:(id)a1;
+ (BOOL)shouldUserStandardLongPressMenu:(id)a0;
+ (id)monitorCommonParamsWithContainer:(id)a0 context:(id)a1;
+ (id)appThemeKey;
+ (id)currentAppTheme;
+ (id)appThemeNotificationName;
+ (BOOL)isFirstWebViewDomainPartyWithURL:(id)a0;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)createLoadingView:(id)a0;
- (id)createErrorView;
- (id)navigationLeftViewItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)onCreateNavigationContentView:(id)a0 navBarView:(id)a1 context:(id)a2 containerVC:(id)a3;
- (id)navigationRightViewItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)onNavigationUpdateContentView:(id)a0 title:(id)a1 titleColor:(id)a2 context:(id)a3 containerVC:(id)a4;
- (id)onNavigationUpdateLeftItemsWithNavigationBarItems:(id)a0 context:(id)a1 containerVC:(id)a2;
- (id)onNavigationUpdateRightItemsWithNavigationBarItems:(id)a0 context:(id)a1 containerVC:(id)a2;
- (BOOL)shouldShowCloseItemOnNavigationWithContext:(id)a0 containerVC:(id)a1;
- (void)navigationBarViewWithContext:(id)a0 navBar:(id)a1 containerVC:(id)a2;
- (void)onUpdateNavigationTitle:(id)a0;
- (void)onUpdateNavigationTitleColor:(id)a0;
- (void)onShowLoadingViewWithContext:(id)a0 contianerVC:(id)a1;
- (void)onHideLoadingViewWithContext:(id)a0 contianerVC:(id)a1;
- (id)provideErrorViewWithErrorType:(long long)a0 error:(id)a1 errorUIStyle:(long long)a2 context:(id)a3 containerVC:(id)a4;
- (void)pageViewController:(id)a0 layoutPadContainer:(id)a1;
- (id)webMenusWithRootMenu:(id)a0 webView:(id)a1 schemaParams:(id)a2;
- (void)onLongPressImageInWebView:(id)a0 schemaParams:(id)a1 imageURL:(id)a2;
- (id)p_fetchCurrentAppTheme;
- (void)setupNavigationbarWithContext:(id)a0 navBar:(id)a1 contentView:(id)a2;
- (BOOL)p_shouldShowCloseItemOnNavigationWithContext:(id)a0 containerVC:(id)a1;
- (void)setupTitleViewWithContext:(id)a0 navBar:(id)a1 contentView:(id)a2;
- (void)onShowErrorViewWithErrorType:(long long)a0 error:(id)a1 errorUIStyle:(long long)a2 context:(id)a3 containerVC:(id)a4;
- (void)onRemoveErrorViewWithErrorType:(id)a0 contianerVC:(id)a1;
- (void).cxx_destruct;

@end
