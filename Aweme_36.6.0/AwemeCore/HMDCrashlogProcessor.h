@class HMDCrashReportInfo, HMDCrashInfo, NSDictionary;

@interface HMDCrashlogProcessor : NSObject {
    BOOL _needLastCrash;
    HMDCrashInfo *_latestCrashInfo;
    NSDictionary *_latestPostData;
}

@property (nonatomic) BOOL needEncrypt;
@property (nonatomic) double launchCrashThreshold;
@property (retain, nonatomic) HMDCrashReportInfo *crashReport;

- (void)startProcess:(BOOL)a0;
- (BOOL)generateCrashlogWithInputDir:(id)a0 outputPath:(id)a1;
- (id)zipCrashExtendWithInputDir:(id)a0;
- (id)crashExtendFilesWithInputDir:(id)a0;
- (id)postDataWithCrashInfo:(id)a0;
- (id)stackAnalysis:(id)a0;
- (id)registerAnalysis:(id)a0;
- (id)regionDicts:(id)a0;
- (id)crashDetail:(id)a0;
- (void).cxx_destruct;

@end
