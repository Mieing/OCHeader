@class HMDThreadMonitorConfig, NSString;

@interface HMDThreadInversionMonitorPlugin : NSObject <HMDThreadMonitorPluginProtocol>

@property BOOL isRunning;
@property (retain, nonatomic) HMDThreadMonitorConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginInstance;

- (void)startFishhook;
- (void)setupThreadConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
