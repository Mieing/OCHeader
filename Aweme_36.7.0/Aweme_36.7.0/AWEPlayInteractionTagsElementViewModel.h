@class DUXBasicSheet, NSString, AWEAwemeModel, AFDAmbassador;
@protocol AWEPlayInteractionTagsElementViewModelAmbassadorProtocol;

@interface AWEPlayInteractionTagsElementViewModel : AWEPlayInteractionBaseElementViewModel <AWEPlayInteractionTagsElementViewModelAmbassadorDelegate, DUXSheetDelegate, AWEDislikeWithDrawPanelDelegate>

@property (nonatomic) BOOL isFromGoldShareToIMEntrance;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AFDAmbassador<AWEPlayInteractionTagsElementViewModelAmbassadorProtocol> *friendsAmbassador;
@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)enterDiggedUser:(id)a0;
- (id /* block */)shareConfigurationHandler;
- (void)didClickWithDrawButton;
- (void)afd_layoutElement;
- (void)didClickDislikeWithDrawTag;
- (void)didClickUnreadMentionTag;
- (void)enterRelationLabelPage:(id)a0;
- (void)enterNearbyRedPacketDetail:(id)a0;
- (void)didShowWithDrawButton;
- (void)_onRelationLabelClicked_IMP:(id)a0;
- (void)initializeRecommendToFriendTrackParam;
- (void)showLikeUserListViewController;
- (void)postCommentButtonClickedNotificationWithGestureRecognizer:(id)a0;
- (void)showFriendsWatchingLikeUserList;
- (void)showSharePanelOnViewController:(id)a0;
- (void)trackEnterLikeListOrCommentList:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)isVideoPlaying;

@end
