@class NSDate, NSMutableDictionary, NSArray, BDSCUserAction, BDSCCacheItem, NSMutableArray;

@interface BDSCUserActionCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionInfo;
@property (retain, nonatomic) NSMutableArray *deviceCacheList;
@property (retain, nonatomic) BDSCCacheItem *commonDevice;
@property (retain, nonatomic) BDSCUserAction *currentAction;
@property (nonatomic) BOOL isChange;
@property (nonatomic) BOOL didUpdateSearchStartCount;
@property (nonatomic) BOOL didUpdateSearchSuccessCount;
@property (nonatomic) long long historySearchSuccessCount;
@property (nonatomic) long long consecutiveSearchFailedCount;
@property (nonatomic) long long notUseResearchCardCount;
@property (nonatomic) double lastEnterCastTime;
@property (nonatomic) double lastCastSuccessTime;
@property (nonatomic) BOOL isLocalCastNewUser;
@property (nonatomic) long long showLocalCastAlertCount;
@property (nonatomic) long long searchDeviceViewShowCount;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) BOOL neverSearchSuccessUser;
@property (nonatomic) BOOL searchSuccessUser;
@property (nonatomic) BOOL isResearchCardFullUsed;
@property (copy, nonatomic) NSArray *lastSearchResult;
@property (nonatomic) BOOL openLocalCast;
@property (nonatomic) BOOL shouldShowLocalCastAlert;
@property (nonatomic) BOOL shouldIgnoreAutoConnectDevice;
@property (nonatomic) long long topSpeedCastPopoverShowCount;
@property (retain, nonatomic) NSDate *topSpeedCastPopoverLastShowDate;
@property (nonatomic) long long topSpeedCastTipShowCount;
@property (retain, nonatomic) NSDate *topSpeedCastTipLastShowDate;
@property (nonatomic) BOOL hasPendantGuideShown;
@property (nonatomic) BOOL airPlayDisplayReopenGuideHasBeenShown;

- (id)showResearchCardStrategyWithConfig:(id)a0;
- (void)markUser;
- (void)markSessionIDUpdate;
- (void)increaseSearchDeviceViewShowCount;
- (BOOL)userHasAction:(id)a0 atLastDay:(long long)a1;
- (id)popCommonDevice;
- (void)clearDeviceCache;
- (void)stashDeviceCache:(id)a0;
- (void)stashCommonDeviceInfo:(id)a0;
- (id)popDeviceCache;
- (void)increaseSearchSuccessSessionCountIfNeeded;
- (void)increaseSearchFailedCount;
- (void)increaseNotUseResearchCardCount;
- (void)recordEnterCast;
- (void)increasePlayCount;
- (void)recordCastSuccess;
- (void)increaseSearchStartCount;
- (long long)lastEnterCastInterval;
- (long long)lastCastSuccessInterval;
- (void)markLocalCastStatus:(BOOL)a0;
- (void)markShowLocalCastAlert;
- (void)increaseShowResearchCardCount;
- (void)markResearchCardFullUsed;
- (void)increaseSearchStartSessionCountIfNeeded;
- (id)actionArrayForLastDay:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillResignActive;
- (id)currentTime;

@end
