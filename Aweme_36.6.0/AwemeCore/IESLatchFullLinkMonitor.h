@class NSString, NSMutableDictionary;
@protocol IESLatchFullLinkMonitorProtocol, IESLatchHybridContainerProtocol;

@interface IESLatchFullLinkMonitor : NSObject

@property (retain, nonatomic) id<IESLatchHybridContainerProtocol> container;
@property (copy, nonatomic) NSString *business;
@property (nonatomic) BOOL resultIfDone;
@property (nonatomic) BOOL metricIfDone;
@property (weak, nonatomic) id<IESLatchFullLinkMonitorProtocol> delegate;
@property (copy, nonatomic) NSString *transferType;
@property (nonatomic) double handleScheme;
@property (nonatomic) double latchStart;
@property (nonatomic) double startTime;
@property (nonatomic) double ioDuration;
@property (nonatomic) double envReadyStart;
@property (nonatomic) double envReadyEnd;
@property (nonatomic) double evaluateLatchInitStart;
@property (nonatomic) double evaluatePrefetchStart;
@property (nonatomic) double evaluatePrefetchEnd;
@property (nonatomic) double firstInvokeJsb;
@property (nonatomic) double lastJsbFinished;
@property (retain, nonatomic) NSMutableDictionary *jsbCallStart;
@property (retain, nonatomic) NSMutableDictionary *jsbCallBack;
@property (nonatomic) double attachStart;
@property (nonatomic) double attachCallbackStart;
@property (nonatomic) double attachCallbackEnd;
@property (retain, nonatomic) NSMutableDictionary *sendJSEvent;
@property (retain, nonatomic) NSMutableDictionary *receiveJSEvent;
@property (nonatomic) double diff;

- (void)recordStartTime;
- (void)finishReport:(id)a0;
- (id)getCurrentOpenType;
- (BOOL)checkMonitorIfDone;
- (id)getJSBDesc:(id)a0;
- (id)initWithContainer:(id)a0 business:(id)a1 delegate:(id)a2;
- (void)recordOpenTime;
- (void)recordIODuration:(double)a0;
- (void)recordEnvReadyStart;
- (void)recordEnvReadyEnd;
- (void)recordEvaluateInitTime;
- (void)recordEvaluatePrefetchStart;
- (void)recordEvaluatePrefetchEnd;
- (void)recordFirstInvokeJsb;
- (void)recordLastJsbFinished;
- (void)recordJSBCallStart:(id)a0 callbackID:(id)a1;
- (void)recordJSBCallBack:(id)a0 callbackID:(id)a1;
- (void)recordAttachStart;
- (void)recordAttachCallbackStart;
- (void)recordAttachCallbackEnd;
- (void)recordDiff:(double)a0;
- (void)recordSendJSEvent:(id)a0;
- (void)recordReceiveJSEvent:(id)a0;
- (void)executeResultReportWith:(id)a0;
- (void)executePerfMetricReportWith:(id)a0 engineType:(id)a1;
- (void)setLatchTransferType:(id)a0;
- (void)reportJsbPromiseResult:(id)a0;
- (void)reportRegisterXbridgePerfMetric:(double)a0;
- (void).cxx_destruct;
- (double)currentTimestamp;

@end
