@class NSString, AWEPageContext, NSLock, UIViewController;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionLikeElementViewModel : AWEPlayInteractionBaseElementViewModel <AWEGuestModeMessage, AWEPlayInteractionLikeElementViewModelProtocol>

@property (retain, nonatomic) NSLock *diggLock;
@property (nonatomic) unsigned long long likeActionStatus;
@property (copy, nonatomic) NSString *pageTypeString;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ teenModeLikeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAFDServiceDOUYINInterestSocialAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)onLikeButtonClicked:(id)a0;
- (void)doSafeDiggWithConfig:(id)a0;
- (void)onAwemeDiggNotification:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAFDServiceDOUYINInterestSocialAdapter;
- (void)onVideoPlayerViewDoubleClickedAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onLikeButtonClicked:(id)a0 extraInfo:(id)a1;
- (void)stratTracker;
- (void)onAwemeDiggBatchCancelNotification:(id)a0;
- (void)updateLikeTotalCountWithNotification:(id)a0;
- (void)onAwemeMusicNotificaton:(id)a0;
- (void)guestDidDiggAweme:(id)a0 isUndigg:(BOOL)a1;
- (void)guest_onLikeButtonClicked:(id)a0 extraInfo:(id)a1;
- (void)trackLikeEventType:(long long)a0 enterMethod:(id)a1 triggerLogin:(BOOL)a2;
- (void)trackLikeEventType:(long long)a0 enterMethod:(id)a1 triggerLogin:(BOOL)a2 diggStatusUnchange:(BOOL)a3;
- (void)trackLikeEventType:(long long)a0 enterMethod:(id)a1 triggerLogin:(BOOL)a2 diggStatusUnchange:(BOOL)a3 extraDict:(id)a4;
- (BOOL)enableUnloginLikeTrackFix;
- (void)guest_onVideoPlayerViewDoubleClickedAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)feedDoubleClickGuideLogin;
- (void)addTabNameToExtraData:(id)a0;
- (void)addPreviousPageToExtraData:(id)a0;
- (void)addHomepageUserIDToExtraData:(id)a0;
- (void)addSafeControlExtraData:(id)a0;
- (void)trackLikeWithResponse:(id)a0 error:(id)a1 awemeType:(long long)a2;
- (void)trackForDiggError:(id)a0 itemID:(id)a1 error:(id)a2;
- (void)handleDiggActionWithResponse:(id)a0 error:(id)a1;
- (void)guest_diggWithDiggBlock:(id /* block */)a0 undiggBlock:(id /* block */)a1 otherActionBlock:(id /* block */)a2 actionFailedBlock:(id /* block */)a3 successedBlock:(id /* block */)a4 diggOriginItem:(BOOL)a5 enterMethod:(id)a6 inFollowFeed:(BOOL)a7 ignoreUnlogin:(BOOL)a8 extraParams:(id)a9 animationBlock:(id /* block */)a10;
- (void)interactor_onLikeButtonClicked:(id)a0 extraInfo:(id)a1;
- (void)trackLikeEventType:(long long)a0 enterMethod:(id)a1;
- (void)onVideoPlayerViewDoubleClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
