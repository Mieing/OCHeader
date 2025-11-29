@class NSString, NSMutableArray;

@interface AWEProfileHeaderHomeShortcutSectionController : AWEBaseListSectionController <AWEProfileHeaderHomeShortcutCellDelegate, AWEUserMessage>

@property (nonatomic) BOOL trackProfileEditBtnShown;
@property (nonatomic) BOOL hasSyncViewDidAppear;
@property (retain, nonatomic) NSMutableArray *binds;
@property (readonly, nonatomic) long long recommendCount;
@property (nonatomic) BOOL recommendCountRequestOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didSwitchAccountFailed;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)homeShortcutViewDidClickWithType:(unsigned long long)a0;
- (void)shortCutViewDidAppear;
- (void)fetchNewRecommendFriendCountWithScene:(id)a0;
- (void)refreshRecommendCountWithScene:(id)a0;
- (void)__trackEnterpriseProfileButtonEventName:(id)a0;
- (long long)isAddGoldCollectShow;
- (id)addFriendsDotParams;
- (void)trackClickAddFriends;
- (long long)isEditGoldCollectShow;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)cellClass;

@end
