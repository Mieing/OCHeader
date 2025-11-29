@class WSLocalTemplateConfig, NSString, UILongPressGestureRecognizer, UIViewController;

@interface WSFinderLongVideoContainerView : WSContainerBaseView

@property (retain, nonatomic) UIViewController *vc;
@property (retain, nonatomic) WSLocalTemplateConfig *config;
@property (nonatomic) BOOL isCurWSWebView;
@property (retain, nonatomic) NSString *curContextId;
@property (nonatomic) BOOL hasAddView;
@property (nonatomic) BOOL selectedBefore;
@property (nonatomic) BOOL appearBySelectTab;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) unsigned long long appearType;
@property (retain, nonatomic) UILongPressGestureRecognizer *tabLongPressGestureRecognizer;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)_clearContent;
- (void)initViewIfNeed;
- (void)receiveDidEnterBackgroundNotification:(id)a0;
- (void)receiveWillEnterForegroundNotification:(id)a0;
- (void)onSwitchToOtherView:(id)a0;
- (void)onSwitchToThisView:(id)a0;
- (void)onEnterWSWebView:(BOOL)a0;
- (void)onDidEnterWSWebView:(BOOL)a0;
- (void)onQuitWSWebView:(BOOL)a0;
- (void)onContainerAppear;
- (void)onContainerDidDisappear;
- (void)checkAddView;
- (void)updateContextId;
- (void)restoreContextId;
- (int)commentScene;
- (void)reportEnter:(unsigned long long)a0;
- (void)reportEventCode:(long long)a0;
- (void)reportTabExpose:(unsigned long long)a0;
- (void)reportTabUnExpose:(BOOL)a0 isExit:(BOOL)a1;
- (id)enterQueryDict;
- (void)reportVCExpose:(unsigned long long)a0;
- (void)reportVCUnexpose:(BOOL)a0 isExit:(BOOL)a1;
- (void)onTabSelectStateChangeWithWSExit;
- (void)onTabSelectStateChange:(BOOL)a0 enterType:(long long)a1;
- (void).cxx_destruct;

@end
