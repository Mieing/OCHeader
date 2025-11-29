@class AWEUploadPortraitConfig, NSMutableSet;

@interface AWEPortraitUploadHelper : NSObject

@property (retain, nonatomic) AWEUploadPortraitConfig *config;
@property (retain, nonatomic) NSMutableSet *clientPortraitSet;
@property (nonatomic) long long reportTimes;
@property (nonatomic) long long lastReportMs;
@property (nonatomic) long long setupTimeMs;
@property (nonatomic) BOOL hasSetup;

+ (id)sharedInstance;

- (void)checkAndReportClientPortraits;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)setupIfNeeded;

@end
