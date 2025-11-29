@class AWETransformerFulllinkPerfContext;

@interface AWETransformerPerfMonitor : NSObject

@property (retain, nonatomic) AWETransformerFulllinkPerfContext *fullLinkContext;

+ (void)startFPSMonitor;
+ (void)trackDSLFmpWithParams:(id)a0;
+ (void)__trackEvent:(id)a0 Params:(id)a1;
+ (void)trackDSLCardFmpWithParams:(id)a0;
+ (void)trackDSLCardPerformanceWithParams:(id)a0;
+ (void)endFPSMonitorWithParams:(id)a0;
+ (void)trackDSLPerformanceWithParams:(id)a0;

- (void)transformerSDKWillProcess;
- (void)transformerSDKDidFinishProcess;
- (double)getSDKWillProcessMediaTime;
- (void)transformerFMPDidFinishWithParams:(id)a0;
- (void)transformerFmpBegin;
- (void)settingsWillRequest;
- (void)settingsDidFinishRequestWithResponse:(id)a0;

@end
