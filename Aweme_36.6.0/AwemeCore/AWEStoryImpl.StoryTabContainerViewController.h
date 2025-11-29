@class NSString;

@interface AWEStoryImpl.StoryTabContainerViewController : AWEProfileTabContainerViewController <AWEStoryTabContainerViewControllerProtocol> {
    void /* function */ updateLockIconBlock;
    void /* function */ enterFrom;
    void /* unknown type, empty encoding */ userModel;
    void /* unknown type, empty encoding */ cameraButtonManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTabManager;
    void /* unknown type, empty encoding */ mateStatusObserver;
}

@property (nonatomic, weak) void /* function */ tabComponent;
@property (nonatomic, copy) id /* block */ updateLockIconBlock;
@property (nonatomic) BOOL isFromUserHomePage;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic) BOOL isFromHomepageDetail;
@property (nonatomic) long long prePageType;

- (void)onTabDidSwitchSelect;
- (BOOL)hideSegmentControl;
- (BOOL)shouldShowBlockView;
- (void)draftDidChange:(id)a0;
- (id)tabItemVCForModel:(id)a0 index:(long long)a1;
- (void)didExposeItemAtIndex:(long long)a0 isShowingRedDot:(BOOL)a1 exposeType:(unsigned long long)a2;
- (void)didSelectItemAtIndex:(long long)a0 viewController:(id)a1 isFromRedDot:(BOOL)a2 selectType:(unsigned long long)a3;
- (void)containerViewDidScroll:(id)a0;
- (void)showMomentMigrationBubble;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })momentSubTabFrame;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
