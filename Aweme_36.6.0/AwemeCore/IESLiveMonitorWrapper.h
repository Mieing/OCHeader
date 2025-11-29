@class IESLiveTraceService, NSDictionary, NSString;
@protocol IESLiveMonitorStrategyService;

@interface IESLiveMonitorWrapper : NSObject <IESLiveMonitorStrategyService, IESLiveMonitor>

@property (retain, nonatomic) IESLiveTraceService *traceService;
@property (nonatomic) long long deviceID;
@property (nonatomic) BOOL optimizeUpload;
@property (retain, nonatomic) NSDictionary *sampleConfig;
@property (retain, nonatomic) id<IESLiveMonitorStrategyService> strategyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackData:(id)a0 logTypeStr:(id)a1;
- (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)trackService:(id)a0 value:(long long)a1 extra:(id)a2;
- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)vsTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackEventWith:(id)a0;
- (void)setupTraceService;
- (void)setupUploadConfig;
- (BOOL)enableUploadForEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithMonitor:(id)a0;

@end
