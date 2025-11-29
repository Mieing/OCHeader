@class NSString, NSMutableArray, NSLock;

@interface AWEDouyinSelectLabelShowManager : NSObject <AWEDouyinSelectLabelShowManagerProtocol>

@property (copy, nonatomic) NSString *lastDateString;
@property (nonatomic) long long showTotalCount;
@property (nonatomic) long long showAnchorCount;
@property (nonatomic) long long showLabelCount;
@property (retain, nonatomic) NSMutableArray *showItemIDs;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)featureEnable;
+ (id)selectAnchorAndLabelLimitShowConfig;
+ (BOOL)countEnable;
+ (BOOL)shieldEnable;
+ (long long)limitShowCount;
+ (id)supportLabelBusinessIDs;
+ (id)supportAnchorNames;
+ (long long)selecHideTrackSetMaxNum;
+ (id)sharedManager;

- (void)handleResignActive:(id)a0;
- (BOOL)shouldAddSelectAnchorAndLabelShowCountParams;
- (id)currentSelectAnchorAndLabelShowCountParams;
- (id)anchorMonthlyRankingAuthorsKey;
- (id)anchorMonthlyRankingAuthorsValue;
- (id)getAnchorNameFromModel:(id)a0;
- (BOOL)shouldTrackWithItemId:(id)a0;
- (id)getBrandTypeWithType:(id)a0 businessID:(id)a1;
- (id)hasTrackedIds;
- (void)setHasTrackedIds:(id)a0;
- (void)trackDouyinSelectBrandHideWithType:(id)a0 businessID:(id)a1 referString:(id)a2 model:(id)a3;
- (void)loadCountFromStorage;
- (BOOL)shouldIncrementPreCheckWithReferString:(id)a0;
- (BOOL)isSupportSelectAnchorWithModel:(id)a0;
- (void)updateShowCountWithSelectType:(id)a0 itemId:(id)a1 referString:(id)a2;
- (BOOL)isSupportSelectLabelWithBusinessID:(id)a0;
- (BOOL)blockDisplayWithType:(id)a0 referString:(id)a1 model:(id)a2;
- (void)preCheckIfNeed;
- (id)currentStorageDictionary;
- (id)todayDateString;
- (BOOL)shouldBlockShowPreCheckWithType:(id)a0 referString:(id)a1 model:(id)a2;
- (void)handleWillTerminate:(id)a0;
- (void)saveCurrentStatus;
- (void)incrementAnchorShowCountWithModel:(id)a0 referString:(id)a1;
- (void)incrementLabelShowCountWithBusinessID:(id)a0 itemId:(id)a1 referString:(id)a2;
- (BOOL)blockAnchorDisplayReferString:(id)a0 model:(id)a1;
- (BOOL)blockLabelDisplayWithBusinessID:(id)a0 referString:(id)a1 model:(id)a2;
- (void).cxx_destruct;
- (void)registerNotifications;
- (id)init;

@end
