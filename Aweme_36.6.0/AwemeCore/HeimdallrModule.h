@class NSMutableDictionary, Heimdallr, HMDModuleConfig, NSString, HMDReportLimitSizeTool;

@interface HeimdallrModule : NSObject <HeimdallrModule>

@property BOOL isRunning;
@property (retain) HMDModuleConfig *config;
@property (retain, nonatomic) NSMutableDictionary *manualControlIdentifiersAlreadyUsed;
@property (readonly, weak, nonatomic) Heimdallr *heimdallr;
@property BOOL hasExecutedTaskIndependentOfStart;
@property (readonly, weak, nonatomic) HMDReportLimitSizeTool *sizeLimitTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)a0;
- (void)runTaskIndependentOfStart;
- (void)checkOpenStatus:(int)a0 invalidStop:(BOOL)a1;
- (void)cleanupWithConfig:(id)a0;
- (void)checkUploadStatus:(int)a0 passed:(BOOL)a1 otherInfo:(id)a2;
- (void)setupWithHeimdallr:(id)a0;
- (void)setupWithHeimdallrReportSizeLimit:(id)a0;
- (void)setupWithHeimdallrReportSizeLimimt:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (id)moduleName;
- (Class)storeClass;

@end
