@class NSDictionary, NSString;
@protocol ATSSecurityMonitorDataProvider;

@interface ATSSecurityMonitor : NSObject <ATSChannelCallBackDelegate>

@property (retain, nonatomic) NSDictionary *detectorMap;
@property (retain, nonatomic) id<ATSSecurityMonitorDataProvider> dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (id)defaultMonitor;

- (void)initChannels;
- (void)initDetectors;
- (void)onReceiveContent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
