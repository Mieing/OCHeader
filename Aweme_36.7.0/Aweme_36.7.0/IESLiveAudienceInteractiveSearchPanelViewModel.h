@class NSString, IESLiveAudienceInteractiveRootPanel, NSMutableSet, HTSEventContext, NSMutableArray, IESLiveInteractiveSearchAPI;
@protocol IESLiveAudienceInteractiveRootPanelUserService, IESLiveAudienceInteractiveRootPanelDelegate;

@interface IESLiveAudienceInteractiveSearchPanelViewModel : NSObject

@property (retain, nonatomic) IESLiveInteractiveSearchAPI *api;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *lastSearchString;
@property (nonatomic) long long page;
@property (nonatomic) BOOL processingSearch;
@property (nonatomic) BOOL needUpdateResult;
@property (copy, nonatomic) NSString *wordNeededUpdate;
@property (retain, nonatomic) NSMutableSet *uidSet;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelDelegate> delegate;
@property (weak, nonatomic) IESLiveAudienceInteractiveRootPanel *view;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelUserService> rootPanelUserService;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *requestPage;
@property (retain, nonatomic) NSMutableArray *userArray;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)inviteFriendWithUser:(id)a0;
- (id)initWithDelegate:(id)a0 rootPanel:(id)a1 userService:(id)a2 eventContext:(id)a3 requestPage:(id)a4;
- (void)trackSearchResult:(BOOL)a0;
- (void)searchUser:(id)a0 completion:(id /* block */)a1;
- (id)getProcessedHistorySearch;
- (void)storeUser:(id)a0;
- (id)getRedNickName:(id)a0;
- (void)acceptWithUser:(id)a0;
- (void)searchNextPageWithCompletion:(id /* block */)a0;
- (void)distinguishUser;
- (void)trackInviteUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetPage;

@end
