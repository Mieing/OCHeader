@class NSDictionary, NSArray, NSMutableArray;

@interface AWEAppAliveStatusReporter : NSObject

@property (retain, nonatomic) NSDictionary *collectionConfig;
@property (nonatomic) BOOL enableCollection;
@property (nonatomic) long long coldLaunchDelayTime;
@property (nonatomic) long long collectionInterval;
@property (nonatomic) long long oneLoopCount;
@property (nonatomic) long long oneDayCount;
@property (nonatomic) long long backToForegroundDelayTime;
@property (retain, nonatomic) NSArray *targetList;
@property (nonatomic) long long collectIndex;
@property (nonatomic) long long todayCollectionCount;
@property (retain, nonatomic) NSMutableArray *collectionHistory;
@property (nonatomic) BOOL needWaitBackForeground;
@property (nonatomic) long long lastCollectTime;
@property (nonatomic) long long initTime;
@property (nonatomic) BOOL isKLastAlive;

+ (id)sharedManager;

- (void)p_collect;
- (id)keyForToday;
- (void)recoverCollectionIndexAndCount;
- (void)collectionIfNeeded:(unsigned long long)a0;
- (void)checkAliveWithAppInfo:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (void)applicationDidEnterBackground:(id)a0;
- (void)setupConfig;

@end
