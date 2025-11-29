@class NSArray, NSString, NSObject;
@protocol MMCacheCleaner, OS_dispatch_queue;

@interface MMAutoCacheCleanerMgr : MMUserService <MMUIViewControllerExt, MMServiceProtocol> {
    BOOL _cancelled;
}

@property (nonatomic) BOOL isLeaving4Tabs;
@property (retain, nonatomic) NSArray *entranceVCs;
@property (retain, nonatomic) NSArray *exitVCs;
@property unsigned long long nextCheckTime;
@property BOOL running;
@property id<MMCacheCleaner> currentCleaner;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bizCleaners;
+ (id)bizProperties;
+ (unsigned long long)scanSizeForPaths:(id)a0 cancellation:(BOOL *)a1;
+ (long long)scanTimeThresholdForPaths:(id)a0 andSize:(long long)a1 cancellation:(BOOL *)a2;
+ (unsigned long long)deleteAllForPaths:(id)a0 beforeTime:(long long)a1 withDirs:(BOOL)a2 cancellation:(BOOL *)a3;
+ (void)reportType:(long long)a0 actualCleaned:(long long)a1 typedSize:(long long)a2 targetSize:(long long)a3 result:(int)a4 time:(double)a5;
+ (id)cacheClassifyToString:(int)a0;
+ (long long)getTime;
+ (long long)getIntervalExpt;
+ (BOOL)isVC:(id)a0 kindOfClasses:(id)a1;

- (id)init;
- (void)reportScanningType:(int)a0 size:(long long)a1 session:(id)a2;
- (void)reportScanningType:(int)a0 uiSize:(long long)a1 session:(id)a2;
- (void)reportScanningType:(int)a0 size:(long long)a1 uiSize:(long long)a2 typedSize:(id)a3 session:(id)a4;
- (void)reportCleannedType:(int)a0 sizeBefore:(long long)a1 uiSizeBefore:(long long)a2 cleanedSize:(long long)a3 typedSizeBefore:(id)a4 typedCleanedSize:(id)a5 reason:(int)a6 cancelled:(BOOL)a7 session:(id)a8;
- (unsigned long long)scanAndClean;
- (void)tryStartScan;
- (void)start;
- (void)cancel;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)MMUIViewControllerWillAppear:(id)a0;
- (void)MMUIViewControllerWillDisppear:(id)a0;
- (void).cxx_destruct;

@end
