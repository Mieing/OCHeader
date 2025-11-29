@class NSString, NSMutableDictionary;

@interface AWEProfileTabMergedComponent : AWEProfileBaseComponent <AWEProfileTabMergedComponentProtocol>

@property (retain, nonatomic) NSMutableDictionary *enteredStatusMap;
@property (nonatomic) BOOL needRedirectToPostTab;
@property (nonatomic) long long lastRecordTabType;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL needShowRecycledWorks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDeleteAweme:(id)a0;
- (id)guideManager;
- (void)recordEnteredByNewEntrance:(long long)a0 user:(id)a1;
- (void)recordGuidePopoverShown:(long long)a0 user:(id)a1;
- (BOOL)isContainerViewAppeared;
- (void)handleGuideTabRemoveNotification:(id)a0;
- (void)privatePostGuideAnimation;
- (void)redirectToPostWorkTab;
- (void)trackEnterNewEntrance:(long long)a0 user:(id)a1;
- (void)tabRemoveAnimation:(long long)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completed:(id /* block */)a2;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)isCurrentUser;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
