@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionPersonElementViewModel : AWEPlayInteractionBaseElementViewModel <AWEPlayInteractionPersonElementViewModelProtocol>

@property (nonatomic) BOOL isLiveBlocked;
@property (retain, nonatomic) NSString *pageTypeString;
@property (nonatomic) long long fromPageType;
@property (nonatomic) BOOL isRecommendedCard;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL showDecoration;
@property (readonly, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEPadUserPageAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)canEnterLiveRoom:(id /* block */)a0;
- (BOOL)p_isUnfollowFamiliar;
- (BOOL)shouldDismissUserPageWithUserID:(id)a0;
- (BOOL)enableUserPageSplitScreenWithModel:(id)a0;
- (void)openSplitScreenWithViewController:(id)a0 enterMethod:(id)a1;
- (void)enterLiveRoom:(id /* block */)a0;
- (void)enterUserDetailWithEnterMethod:(id)a0 enterPosition:(id)a1;
- (id)aAWEPadSplitScreenAdapter;
- (id)aAFDServiceDOUYINDSAdapter;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)aAWEPadUserPageAdapter;
- (void)trackRelationRecommend:(id)a0;
- (id)splitScreenController;
- (void)interactor_onUserAvatarViewClicked:(id)a0 contentSource:(id)a1 enterLiveRoomBlock:(id /* block */)a2;
- (void)interactor_onAuthorLabelClicked:(id)a0;
- (void)interactor_onAuthorLabelClicked:(id)a0 contentSource:(id)a1;
- (void)router_onUserAvatarViewClicked:(id)a0 enterPosition:(id)a1;
- (void)router_onAuthorLabelClicked:(id)a0;
- (void)router_onAuthorLabelClicked:(id)a0 enterPosition:(id)a1;
- (id)currentCoCreator;
- (void)p_goToPersonalPage:(id)a0 gestureRecognizer:(id)a1;
- (void)interactor_onUserAvatarViewClicked:(id)a0 enterLiveRoomBlock:(id /* block */)a1;
- (void)hideFamiliarElements;
- (void)onLiveBlockAudienceNotication:(id)a0;
- (void)interactor_onLiveBlockAudienceNotication:(id)a0;
- (void)p_trackEnterUserPageWithEnterMethod:(id)a0;
- (void)dismissSplitScreenWithMethod:(id)a0;
- (void)interactor_onAuthorLabelClicked:(id)a0 contentSource:(id)a1 enterMethod:(id)a2;
- (void)router_onAuthorLabelClicked:(id)a0 enterPosition:(id)a1 enterMethod:(id)a2;
- (BOOL)p_isLinkMicRoomLiveCell;
- (id)p_getLinkMicRoomUser;
- (BOOL)p_needTrackFollowCard;
- (void)showUserDetailViewController:(id)a0 withURL:(id)a1 isAds:(BOOL)a2 author:(id)a3 enterMethod:(id)a4 animated:(BOOL)a5;
- (void)router_onUserAvatarViewClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)currentUser;

@end
