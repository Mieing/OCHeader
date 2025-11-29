@class NSString;

@interface AWEPlayInteractionFriendsWatchingPanelPanelController : AWEPlayInteractionNewBaseController <AFDRecommendPanelViewControllerDelegate, AWEPlayInteractionFriendsWatchingPanelPanelControllerProtocol>

@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowed;
- (void)recommendPanelDidUpdate;
- (void)recommendPanelDidDismiss;
- (void)recommendPanelIsShowingChange:(BOOL)a0;
- (void)showRecommendPanelInNoticeWithParams:(id)a0;
- (void)showFriendsWatchingLikeUserListWithParams:(id)a0;
- (void)doRecommendAwemeToFriends;
- (BOOL)p_shouldFamiliarRecommendToFriendsShowTagWithAweme:(id)a0;
- (void)showRecommendPanelWithParams:(id)a0;
- (void)viewDidLoad;

@end
