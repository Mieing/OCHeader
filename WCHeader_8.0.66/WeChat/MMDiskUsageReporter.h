@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, MMDiskUsageRepoterDelegate;

@interface MMDiskUsageReporter : NSObject <IDiskUsageMgr>

@property (retain, nonatomic) NSDictionary *sizeReportIdKeyInfoDic;
@property (retain, nonatomic) NSDictionary *fileNumReportIdKeyInfoDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL isRunning;
@property (weak, nonatomic) id<MMDiskUsageRepoterDelegate> delegate;

+ (id)regularExpressionsThatLogFilesToKV;

- (void)reportAggregationsByDayInterval:(id)a0;
- (void)reportFolders;
- (void)report;
- (void)onDiskUsageMgrFinishOneScan:(id)a0;
- (void)handleScanStat:(id)a0;
- (void)reportChatLog:(id)a0;
- (void)asyncReportAccountInfo;
- (void)reportOnThread:(id)a0;
- (void)removeReportDataFile;
- (void)callReportFinishedOnMainThread;
- (void)reportFileSize:(unsigned int)a0 andFileNum:(unsigned int)a1 toBizType:(long long)a2 vecIDKey:(void *)a3;
- (void)reportDelFileToIDKey:(id)a0 vecIDKey:(void *)a1;
- (void)setupReportInfo;
- (void).cxx_destruct;

@end
