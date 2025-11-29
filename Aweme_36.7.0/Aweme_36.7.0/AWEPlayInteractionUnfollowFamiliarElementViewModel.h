@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewModelHelper;

@interface AWEPlayInteractionUnfollowFamiliarElementViewModel : NSObject <AWEUserMessage, AWEPlayInteractionViewModelProtocol>

@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) id<AWEPlayInteractionViewModelHelper> viewModelHelper;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (id)referString;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)p_trackFollowEventWithMethod:(id)a0 enterMethod:(id)a1;
- (id)currentCoCreator;
- (void)hideFamiliarElements;
- (void)trackFollowEvent;
- (BOOL)canShowMateBtn;
- (void)trackHighValueCreatorFollowViewFollowEventWithMethod:(id)a0;
- (void)dislikeUserFromUnfollowWithoutReport;
- (void)onHighValueCreatorFollowViewFollow;
- (BOOL)useLightInteractionStyle;
- (void)onUnfamiliarViewUnfollow;
- (void)onUnfamiliarViewFollow;
- (void)dislikeMateFromUnfollowAcq;
- (void)temporarilyNotFollow;
- (void)fansVideoSetHasDislikeUser;
- (void)dislikeUserFromUnfollowAcq;
- (void)onMateBtnTapped:(id)a0;
- (void)onGreetBtnTapped;
- (BOOL)canFakeFollow;
- (void)interactor_onUnfamiliarViewUnfollow:(id /* block */)a0;
- (void)_afterFollowFamiliarVideo:(id)a0 status:(long long)a1 error:(id)a2;
- (void)interactor_onUnfamiliarViewFollow:(id /* block */)a0;
- (void)interactor_onHighValueCreatorFollowViewFollow:(id /* block */)a0;
- (void)interactor_dislikeVideoFromUnfollowAcq;
- (id)generateRelationContext;
- (BOOL)isCommentPanelShowing;
- (id)model;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)currentUser;
- (void)dealloc;

@end
