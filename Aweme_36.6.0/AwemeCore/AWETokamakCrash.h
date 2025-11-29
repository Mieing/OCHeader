@class AWETokamakCrashInfo;

@interface AWETokamakCrash : NSObject

@property (retain, nonatomic) AWETokamakCrashInfo *lastCrashInfo;
@property BOOL isReporterReady;
@property (nonatomic) BOOL detectedLastCrashed;

+ (id)shared;

- (void)onLastLaunchCrash:(id)a0;
- (void)onReporterReady;
- (void)checkAndUpload;
- (void)internalTryReport;
- (void)internalUpload;
- (void).cxx_destruct;

@end
