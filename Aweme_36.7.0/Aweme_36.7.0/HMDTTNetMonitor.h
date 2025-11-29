@class NSOperationQueue;

@interface HMDTTNetMonitor : NSObject

@property BOOL isMonitoring;
@property BOOL isExchangeRequestFilter;
@property (retain, nonatomic) NSOperationQueue *ttnetMonitorQueue;

+ (id)requestInfoForURLRequest:(id)a0;
+ (void)setRequestInfo:(id)a0 forURLRequest:(id)a1;
+ (void)changeMonitorTTNetImpSwitch;
+ (id)sharedMonitor;

- (void)registNotification;
- (void)handleTTNetRequstFilter;
- (void)unregistNotification;
- (void)stopHandleRequestFilter;
- (void)startExchangeTTNetRequestFilterBlockSetter;
- (void)stopExchangeTTNetRequestFilterBlockSetter;
- (void)receiveNetworkStartNotification:(id)a0;
- (void)receiveNetworkFinishNotification:(id)a0;
- (void)receiveNetworkSampleNotification:(id)a0;
- (BOOL)__isHitMovingLine:(id)a0;
- (void)__ttnetworkMonitorWithTTNetUserInfo:(id)a0;
- (void)__recordTrafficInfoWithRequest:(id)a0 requestInfo:(id)a1 response:(id)a2 responseInfo:(id)a3 responseData:(id)a4 error:(id)a5;
- (id)recordWithRequest:(id)a0 requestInfo:(id)a1 response:(id)a2 responseInfo:(id)a3 responseData:(id)a4 error:(id)a5;
- (void)sampleWithRequest:(id)a0 AndRequestInfo:(id)a1;
- (void)collectTTNetThreadInfoWithRequest:(id)a0 response:(id)a1 record:(id)a2;
- (void)collectTTNetConcurrentRequestInfo:(id)a0 record:(id)a1;
- (void)collectTTNetBizTimingInfo:(id)a0 response:(id)a1 record:(id)a2;
- (void)collectBizExtraRequestInfo:(id)a0 record:(id)a1;
- (void)dealSDKNetworkMonitorWithRecord:(id)a0 request:(id)a1 sdkAid:(id)a2;
- (id)getPropertyDictCopyFrom:(id)a0 cls:(Class)a1 propertyName:(const char *)a2 instanceVar:(const char *)a3;
- (id)getPropertyValueCopyFrom:(id)a0 cls:(Class)a1 propertyName:(const char *)a2 instanceVar:(const char *)a3;
- (void)updateTTNetConfig;
- (id)isTTNetChromiumCore;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
