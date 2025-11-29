@class NSArray, NSMutableArray;

@interface AWEFeedCacheCenterHistoryHelper : NSObject

@property (retain, nonatomic) NSMutableArray *mutHistoryAwemeIds;
@property (nonatomic) long long newHistoryCount;
@property (nonatomic) long long historyHead;
@property (readonly, nonatomic) BOOL enableCleanDuplicatedHistory;
@property (readonly, nonatomic) long long historyRecordsMaxCount;
@property (readonly, nonatomic) long long historyRecordsPersistInterval;
@property (readonly, nonatomic) BOOL enableCircularArrayOpt;
@property (readonly, copy, nonatomic) NSArray *historyAwemeIds;

+ (id)sharedInstance;

- (void)initConfig;
- (void)p_saveData;
- (id)historyAwemeIdsInOrder:(BOOL)a0;
- (void)videoStartPlay:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillResignActive;

@end
