@class NSArray, NSString;

@interface AWENewSpotlightServiceImpl : HTSService <AWENewSpotlightService, AWEUserMessage>

@property (copy, nonatomic) NSArray *fixedQuerys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (Class)aNSObjectClass;
+ (Class)aAWEUGKitModuleCommonAdapterClass;
+ (void)resetLastRecordTime;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)lastRecordTime;
- (void)donateSearchAppQueryWithCompletion:(id /* block */)a0;
- (void)updateDailyTopQueryData:(id)a0;
- (void)donateUserQueryWithAwemeList:(id)a0 query:(id)a1 completion:(id /* block */)a2;
- (void)donateMediumVideos:(id)a0 completion:(id /* block */)a1;
- (void)donateLongVideos:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableSiriSuggestWithTargetScheme:(id)a0;
- (BOOL)enableSearchQueryDonate;
- (id)gdLabelForSpotlight;
- (id)coreSpotlightTitlePrefix;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (id)aNSObject;
- (id)aAWEUGKitModuleCommonAdapter;
- (BOOL)disableCleanWhenFeatureClose;
- (void)clearCoreSpotlightItemsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableNewSpotlightDonate;
- (void)cleanHistoryDonate;
- (BOOL)shouldDonateSearchTopQuery;
- (id)parseJSONDataToTopQueryVideoInfoList;
- (id)generateSearchableItemToSearchResultWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (BOOL)shouldClearDonatedData;
- (void)donateSearchableItems:(id)a0 scene:(id)a1;
- (void)recordCurrentTimeIfNeeded;
- (BOOL)currentVersionLowerThanSetting;
- (void)clearAppQuery:(id /* block */)a0;
- (void)clearDailyTopQuery:(id /* block */)a0;
- (BOOL)shouldDonateDailyTopQuery;
- (id)generateSearchableItemToSearchResultWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 domainIdentifier:(id)a3 expireTime:(double)a4;
- (BOOL)enableSpotlightUserDonate;
- (id)generateSearchableItemToSearchResultWithAweme:(id)a0 query:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (BOOL)enableSpotlightMediumVideoDonate;
- (id)generateSearchableItemToMediumVideo:(id)a0;
- (BOOL)enableSpotlightLongVideoDonate;
- (id)generateSearchableItemToLongVideo:(id)a0;
- (double)cleanDonateIntervalSeconds;
- (id)coreSpotlightConfig;
- (double)appDonateExpireTime;
- (BOOL)enableDeleteTag;
- (id)stringWithoutAllTags:(id)a0;
- (double)userDonateExpireTime;
- (void)clearUserSearchQuery:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)transferType;

@end
