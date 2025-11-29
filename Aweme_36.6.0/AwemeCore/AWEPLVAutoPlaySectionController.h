@class NSString, AWEPLVAutoPlaySectionViewModel;

@interface AWEPLVAutoPlaySectionController : AWEPLVConstantSectionController <IGListScrollDelegate, AWEUserMessage>

@property (retain, nonatomic) AWEPLVAutoPlaySectionViewModel *viewModel;
@property (nonatomic) BOOL processingLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (void)listAdapter:(id)a0 didScrollSectionController:(id)a1;
- (void)listAdapter:(id)a0 willBeginDraggingSectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDraggingSectionController:(id)a1 willDecelerate:(BOOL)a2;
- (void)listAdapter:(id)a0 didEndDeceleratingSectionController:(id)a1;
- (void)handleAppDidBecomeActive:(id)a0;
- (void)handleAppWillResignActive:(id)a0;
- (void)containerViewWillRefresh;
- (void)changeFocusedViewToCell:(id)a0;
- (void)releaseCurrentFocusedCell;
- (BOOL)canFocuseCell:(id)a0;
- (void)findCurrentFocusedCellWithForceFocuse:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
