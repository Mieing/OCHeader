@class NSDictionary;

@interface AWEIMDoubleTrackerManager : NSObject

@property (readonly, nonatomic) long long deviceGroup;
@property (readonly, nonatomic) long long applogSamplingBase;
@property (readonly, copy, nonatomic) NSDictionary *applogSampling;
@property (readonly, copy, nonatomic) NSDictionary *applogPVSampling;
@property (readonly, copy, nonatomic) NSDictionary *overwriteTrackType;

+ (id)sharedInstance;

- (double)p_randFrom0To1;
- (void)monitorTrackService:(id)a0 status:(long long)a1 params:(id)a2;
- (void)doubleTrackEvent:(id)a0 status:(long long)a1 params:(id)a2;
- (void)applogTrackEvent:(id)a0 params:(id)a1;
- (void)trackThreadLogWithType:(id)a0 parameter:(id)a1 callback:(id /* block */)a2;
- (BOOL)needUploadByCustomSampling:(id)a0 params:(id)a1;
- (void)p_configSettings;
- (id)p_applogPVSamplingLocalConfig;
- (void)p_trackEvent:(id)a0 status:(long long)a1 params:(id)a2 type:(unsigned long long)a3;
- (void)applogTrackEvent:(id)a0 params:(id)a1 ignoreSampling:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
