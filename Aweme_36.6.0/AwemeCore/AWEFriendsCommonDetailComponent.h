@class NSString, AWESocialRelationObserver;

@interface AWEFriendsCommonDetailComponent : AWEUserDetailBaseComponent <AWEUserMessage>

@property (retain, nonatomic) AWESocialRelationObserver *mateStatusObserver;
@property (nonatomic) BOOL hasTrackedEnter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void)userDidTakeScreenshot:(id)a0;
- (void)didReceiveMateApplyPush:(id)a0;
- (void)updateMateStatus:(id)a0;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)trackEnter;
- (void)updateRecommendReasonIfNeeded;
- (id)userID;
- (void).cxx_destruct;
- (id)user;
- (void)viewDidLoad;
- (void)dealloc;
- (void)handleAppWillEnterForeground:(id)a0;

@end
