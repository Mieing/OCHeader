@class NSString, NSNumber;

@interface AWETabLandingDetailProtocolComponent : AWEUserDetailBaseComponent <AWETabLandingDetailProtocol>

@property (nonatomic) long long hitTabLandingSchemaVersion;
@property (nonatomic) long long emptyRecommendType;
@property (copy, nonatomic) NSString *tabLandingTpsaVersion;
@property (retain, nonatomic) NSNumber *profileTabType;
@property (nonatomic) long long previousTabType;
@property (nonatomic) BOOL isAutoLanding;
@property (nonatomic) BOOL hasTrackedDefaultTabLanding;
@property (nonatomic) BOOL alreadyLocateDefaultTab;
@property (nonatomic) long long targetTabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (long long)numberOfTabListItemForTabListViewController:(id)a0;
- (id)tabListViewController;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (id)tabLandingCommonParams;
- (id)tabLandingSchemaVersionParams;
- (void)landingDefaultTabIfNeeded;
- (BOOL)isShowingUserDetailTabType:(long long)a0;
- (void)configLandingTabWithRouterParamDict:(id)a0;
- (BOOL)shouldUseLandingTabNewSchema;
- (long long)landingTabIndexForNewVersionOne;
- (long long)landingTabIndexForHistoryLogic;
- (id)userID;
- (void).cxx_destruct;
- (id)user;
- (void)onInit;

@end
