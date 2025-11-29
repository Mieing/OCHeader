@class NSDictionary, NSMutableDictionary, NSString;

@interface AWESearchPreRequestLifeCycleTraceMonitor : NSObject <AWESearchPreRequestLifeCycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *monitorInfoDic;
@property (retain, nonatomic) NSDictionary *tryEnterSearchMonitorInfo;
@property (retain, nonatomic) NSMutableDictionary *assembleParamsTimeCost;
@property (retain, nonatomic) NSMutableDictionary *tmpMonitorInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)monitorInfoWithPreRequestTag:(id)a0;
- (void)finishSearchWithPreRequestTag:(id)a0;
- (void)preRequestDidStartWithType:(unsigned long long)a0 preRequestTag:(id)a1;
- (void)preRequestDidAssembledWithType:(unsigned long long)a0 preRequestTag:(id)a1;
- (void)preRequestDidCompleteParamsCompareWithType:(unsigned long long)a0 preRequestTag:(id)a1;
- (void)preRequestDidSendWithType:(unsigned long long)a0 preRequestTag:(id)a1;
- (id)monitorKeyWithPreRequestTag:(id)a0;
- (id)currentTimestampInMilliseconds;
- (void)recorderTraceInfoWithPreRequestTag:(id)a0 traceInfo:(id)a1;
- (void)recorderTraceInfoToTmpWithPreRequestTag:(id)a0 traceInfo:(id)a1;
- (void)addPreRequestAssembleParamsTimeCost:(id)a0 requestMode:(id)a1;
- (void)tryEnterSearchWithMonitorInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
