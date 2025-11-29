@class HMDThreadSafeArray, NSString;

@interface AWEDanmakuPlayMonitorHandler : NSObject <AWEEnergyMonitorDataSource>

@property (retain, nonatomic) HMDThreadSafeArray *awemeModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getBatteryMonitorInfo;
- (void)setEvent;
- (id)danmakuPlayResultParamsWithNeedReset:(BOOL)a0;
- (void)addVideoPlayIfNeedWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
