@class NSString;

@interface AFDLegacyService : HTSService <AFDLegacyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createFavoriteUserListPanelVCWithUserList:(id)a0 awemeModel:(id)a1 requestData:(BOOL)a2;
- (id)newAccountManager;
- (id)friendsActionViewController;
- (id)pushLandingTrackerHelper;
- (id)createRewardUserListPanelVCWithAwemeModel:(id)a0;
- (id)feedBottomBarVideoAnalysisEntranceView;
- (id)videoAnalysisPanelManager;
- (Class)videoAnalysisPanelManagerClass;

@end
