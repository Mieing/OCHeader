@class NSDictionary, IESLiveInteractStreamConfig;
@protocol IESLiveFullLinkMonitor, IESLiveRealStreamingProvider;

@interface IESLiveInteractStreamFullLinkMonitor : NSObject

@property (retain, nonatomic) NSDictionary *baseDictionary;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (retain, nonatomic) IESLiveInteractStreamConfig *interactConfig;
@property (retain, nonatomic) NSDictionary *extraMonitorDict;
@property (nonatomic) unsigned long long subEventModule;
@property (nonatomic) double interactStartJoinChannelTimeInterval;
@property (nonatomic) double interactJoinChannelSuccessTimeInterval;
@property (nonatomic) double interactFirstVideoFrameTimeInterval;
@property (nonatomic) double interactFirstFrameRenderTimeInterval;
@property (nonatomic) double interactFirstAudioFrameTimeInterval;
@property (nonatomic) double interactDidLeaveChannelTimeInterval;

- (void)traceWithProduct:(unsigned long long)a0 businessType:(unsigned long long)a1 traceName:(id)a2 step:(id)a3 errorCode:(long long)a4 errorMessage:(id)a5 index:(id)a6 extra:(id)a7;
- (void)monitorKeyApiCallWithoutBaseDic:(id)a0;
- (void)monitorWithEventType:(unsigned long long)a0 serviceName:(id)a1 extra:(id)a2;
- (void)monitorApiCall:(id)a0;
- (void)monitorInformationReport:(id)a0;
- (void)updateInteractConfig:(id)a0;
- (void)monitorSDKCallBack:(id)a0;
- (void)reportRTCData:(id)a0 logType:(id)a1;
- (void)monitorKeyApiCall:(id)a0;
- (void)monitorRTMLinkMessage:(id)a0;
- (void)appendExtraInfoWith:(id)a0;
- (unsigned long long)transferPlayMode:(long long)a0;
- (void).cxx_destruct;

@end
