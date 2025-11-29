@class AWEProfileTabContainerViewController, AWEProfileGuidePopoverHelper, NSString, UIViewController;
@protocol AWEUserProfileTabBaseMethod, AFDProfileStoryWorkListViewControllerProtocol, AWEStoryTabContainerViewControllerProtocol;

@interface AWEStoryHomeComponent : AWEUserHomeBaseComponent <AFDAwemePermissionMessage, AWEPublishTaskMessage, AWEProfileGuidePopoverHelperDelegate, AWEProfileStoryTabPopoverDelegate, DUXPopoverDelegate, AWEStoryTabComponentProtocol, AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AFDProfileStoryWorkListViewControllerProtocol> *storyVC;
@property (retain, nonatomic) AWEProfileTabContainerViewController<AWEStoryTabContainerViewControllerProtocol> *storyTabVC;
@property (retain, nonatomic) UIViewController<AWEUserProfileTabBaseMethod> *story25TabViewController;
@property (retain, nonatomic) AWEProfileGuidePopoverHelper *popoverHelper;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL updateStoryTabShow25Story;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didRemoveWithResult:(long long)a1 error:(id)a2 info:(id)a3;
- (void)popoverDidDisappear:(id)a0;
- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (id)tabHelper;
- (void)transferToStoryTab;
- (void)removeMomentTab;
- (void)launchPopoverWithOnClose:(id /* block */)a0;
- (void)invokeOnClose:(BOOL)a0;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (void)popoverHelperDidInvokeOnclose:(id)a0;
- (id)storyTabModel;
- (id)storyTabGuidePopoverHasShownKey;
- (BOOL)canShowStoryTabGuideWithCurrentTime;
- (id)newStoryLastPublishTimeKey;
- (void)showStoryTabGuidePopover;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (void)dealloc;
- (void)onInit;

@end
