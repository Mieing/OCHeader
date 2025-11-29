@class AWEStorage, NSDate;

@interface AWEInfraCacheCleanManager : NSObject

@property (nonatomic) BOOL shouldCleanLegacyFiles;
@property (nonatomic) unsigned long long backgroundTempTask;
@property (retain, nonatomic) AWEStorage *universalStorage;
@property (nonatomic) double appUsageSpaceInMB;
@property (retain, nonatomic) NSDate *lastAutoCleanDate;

+ (BOOL)isAfterFeedReady;
+ (id)sharedManager;

- (BOOL)frequencyAutoCleanExecute;
- (BOOL)shouldCleanForExtremeUser;
- (BOOL)enableAutoCleanPeriod;
- (BOOL)oneDate:(id)a0 isEarlierNowByAddDays:(long long)a1;
- (BOOL)inCleanScenes;
- (BOOL)moreThanThresholdValue;
- (BOOL)frequencyExecute;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)endBackgroundTask;
- (BOOL)newUser;

@end
