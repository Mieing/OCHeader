@class NSString, NSArray, HTSLiveStatsApi, NSObject;
@protocol IESLiveFullLinkMonitor, IESLiveNetworkQualityInfoService, OS_dispatch_queue;

@interface IESLivePushStreamLogger : NSObject

@property (retain, nonatomic) HTSLiveStatsApi *statsApi;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) double lastUpdateTimestamp;
@property (retain, nonatomic) NSString *service;
@property (copy, nonatomic) NSArray *predicateList;
@property (retain, nonatomic) id<IESLiveNetworkQualityInfoService> networkQualityInfoService;
@property (nonatomic) struct IESLivePushStreamLoggerConfig { BOOL x0; BOOL x1; } *loggerConfigRef;
@property (nonatomic) double gpuSampleTime;
@property (nonatomic) double cpuFreqSampleTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (nonatomic) unsigned long long contentType;

- (id)attachingDIContext;
- (id)commonDeviceInfo;
- (void)logWithDict:(id)a0;
- (id)currentAppStateInfo;
- (void)cloudRenderLogReportWithDict:(id)a0 logType:(id)a1;
- (id)addlogExtraInfo:(id)a0;
- (void)reportToFulllinkMonitor:(id)a0;
- (void)updateReportConfigIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
