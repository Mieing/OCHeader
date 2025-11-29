@class NSString, UIViewController, AWEProfileTabContainerViewController;
@protocol AWEUserProfileTabBaseMethod, AFDProfileStoryWorkListViewControllerProtocol, AWEStoryTabContainerViewControllerProtocol;

@interface AWEStoryDetailComponent : AWEUserDetailBaseComponent <AWEStoryTabComponentProtocol, AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AFDProfileStoryWorkListViewControllerProtocol> *storyVC;
@property (retain, nonatomic) AWEProfileTabContainerViewController<AWEStoryTabContainerViewControllerProtocol> *storyTabVC;
@property (retain, nonatomic) UIViewController<AWEUserProfileTabBaseMethod> *story25TabViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (void)transferToStoryTab;
- (void)removeMomentTab;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)padService;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (id)storyTabModel;
- (void)updateLockIcon:(BOOL)a0;
- (void).cxx_destruct;
- (id)user;
- (void)onInit;

@end
