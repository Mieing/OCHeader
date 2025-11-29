@class NSString, NSMutableArray, AWEBinding;

@interface AWEProfileHeaderSocialStatisticSectionController : AWEBaseListSectionController <AWEProfileHeaderSocialStatisticCollectionViewCellDelegate>

@property (retain, nonatomic) NSMutableArray *binds;
@property (retain, nonatomic) AWEBinding *favoritedBind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPlayAlertViewWithUser:(id)a0;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)socialStatisticViewdidClickFollow;
- (void)socialStatisticViewdidClickFans;
- (void)socialStatisticViewdidClickFriend;
- (void)socialStatisticViewdidClickpraise;
- (void)trackFriendLabelIfNeeded:(id)a0;
- (void)trackMateLabelIfNeeded:(id)a0;
- (void)__trackButtonClick:(id)a0;
- (void)p_showFansList;
- (void)showFriendList;
- (void)p_showPlayAlertView;
- (void)p_showFollowingList;
- (BOOL)p_isCurrentLoginAccountIsNegativeAccount;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
