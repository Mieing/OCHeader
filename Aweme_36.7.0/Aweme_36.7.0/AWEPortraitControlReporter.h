@class NSDateFormatter, AWEStorage, NSObject, AWEPortraitUsageData;
@protocol OS_dispatch_queue;

@interface AWEPortraitControlReporter : NSObject

@property (retain, nonatomic) NSDateFormatter *yyyyMMddFormatter;
@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) AWEPortraitUsageData *todayUsageData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;

+ (id)sharedInstance;

- (void)checkAndReport;
- (void)checkAndSaveUsage;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)setup;

@end
