@class WeeffectRenderContextWrapper, WCLoopMetricsCollector;

@interface MMLiveRemoteTrtcCustomRenderComposeInitParam : NSObject

@property (nonatomic) long long weffectScene;
@property (retain, nonatomic) WeeffectRenderContextWrapper *sharedRenderContext;
@property (nonatomic) unsigned long long workingMode;
@property (nonatomic) BOOL enableRCI;
@property (nonatomic) BOOL isLiveCaptureRunning;
@property (retain, nonatomic) WCLoopMetricsCollector *captureMetricsCollector;

- (void).cxx_destruct;

@end
