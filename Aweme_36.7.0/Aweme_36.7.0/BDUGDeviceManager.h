@class NSString, NSTimer, BDUGDeviceCollector, NSDictionary;
@protocol BDUGDeviceCollectDelegate;

@interface BDUGDeviceManager : NSObject

@property (retain, nonatomic) BDUGDeviceCollector *collector;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSDictionary *settingsData;
@property (weak, nonatomic) id<BDUGDeviceCollectDelegate> delegate;

+ (id)buildQueryFromDictionary:(id)a0;
+ (void)uploadDataWithURLPath:(id)a0 deviceInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sharedManager;

- (BOOL)checkCanReport;
- (void)reportLaunchingUploadingWithCompletionHandler:(id /* block */)a0;
- (BOOL)checkLastReportDate;
- (BOOL)checkLastReportTimestamp;
- (void)startLaunchingReportWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
