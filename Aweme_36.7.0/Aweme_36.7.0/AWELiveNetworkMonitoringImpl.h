@class TTResponseFilterObject, NSString;

@interface AWELiveNetworkMonitoringImpl : NSObject <IESLiveNetworkMonitoring>

@property (retain, nonatomic) TTResponseFilterObject *responseFilterObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginMonitoring;
- (void)endMonitoring;

@end
