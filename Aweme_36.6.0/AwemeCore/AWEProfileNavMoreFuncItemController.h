@class AWEUserHomeMoreButton, NSString, UIView, UIButton;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavMoreFuncItemController : NSObject <AWEProfileNavigationItemControllerProtocol, AWEProfileBubbleManagerAWEBubbleDelegate>

@property (retain, nonatomic) UIButton *moreFuncItemView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEUserHomeMoreButton *homeMoreBtn;
@property (retain, nonatomic) UIButton *detailMoreBtn;
@property (retain, nonatomic) UIButton *navDetailMoreBtn;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)moreButtonClicked:(id)a0;
- (id)profileContext;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (id)customViewForQueueType:(unsigned long long)a0 bubbleType:(unsigned long long)a1;
- (id)customContainerViewForQueueType:(unsigned long long)a0 bubbleType:(unsigned long long)a1;
- (id)navigationItemView;
- (BOOL)disableProfileScrollingAlphaChange;
- (void)onNavigationStickToTop:(BOOL)a0;
- (void)onThemeChange:(BOOL)a0;
- (id)p_sidebarEntranceView;
- (BOOL)p_isMergeProfileEnabled;
- (id)p_loadSideBarEntranceView;
- (id)p_sideBarAmbienceObject;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (BOOL)isCurrentUser;

@end
