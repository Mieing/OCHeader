@interface IESLiveSpeechASRMonitor : NSObject

@property (nonatomic) long long asrStartCount;
@property (nonatomic) long long asrCompleteCount;
@property (nonatomic) long long asrNetworkErrorCount;
@property (nonatomic) long long asrServiceErrorCount;

- (void)trackAsrPipeLine:(id)a0 message:(id)a1;
- (void)trackAsrDecodeError:(id)a0 event2:(id)a1 event3:(id)a2 message:(id)a3 sliceCount:(id)a4;
- (void)trackAsrSliceAlignment:(id)a0 message:(id)a1 sliceCount:(id)a2 cloudBeginTime:(id)a3 cloudEndTime:(id)a4 clientBeginTime:(id)a5 clientEndTime:(id)a6;
- (void)trackAsrNeedToClose:(id)a0 message:(id)a1 beginTime:(id)a2 endTime:(id)a3;
- (void)trackAsrNeedToCloseForPerf:(id)a0 message:(id)a1 beginTime:(id)a2 endTime:(id)a3 cpu:(id)a4 mem:(id)a5 fps:(id)a6;
- (void)trackAsrPipeLineWithPerf:(id)a0 code:(id)a1 message:(id)a2;
- (void)trackAsrRecognizeError:(id)a0 message:(id)a1;
- (void)trackAsrRecognizeSuccess:(id)a0 resultString:(id)a1 sliceCount:(id)a2;
- (void)trackAsrRecordResult:(id)a0 message:(id)a1;
- (void)trackAsrPrepare:(id)a0 message:(id)a1;
- (void)trackAsrRecognizeSlow:(id)a0 message:(id)a1 beginTime:(id)a2 endTime:(id)a3;
- (id)init;

@end
