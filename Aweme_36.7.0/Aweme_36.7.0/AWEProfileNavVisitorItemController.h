@class AWEUserHomeVisitorButton, NSString;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavVisitorItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) AWEUserHomeVisitorButton *visitorButton;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserProfileGreetCommonAdapterClass;

- (BOOL)canShow;
- (id)profileContext;
- (void)newPrivacySettingItemDidChange:(id)a0;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (id)padService;
- (id)navigationItemView;
- (void)onFitNavigationLayoutClash;
- (void)updateVisitorNumberNotification:(id)a0;
- (BOOL)needFitMiniScreen;
- (void)updateVisitorButtonNumber;
- (void)trackVisitorButtonShow;
- (id)isHideWordStr;
- (id)aAWEUserProfileGreetCommonAdapter;
- (void)visitorButtonClicked;
- (void)viewDidAppear;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (BOOL)isCurrentUser;
- (void)viewDidDisappear;

@end
