@protocol IESLivePerfSampler;

@interface IESLiveAnchorPerfSamplerPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;

- (id)subscribeMessages;
- (void)startPrefDurationReport;
- (void)liveRoomWillDealloc;
- (void)handleLiveRoomDidClose;
- (void)subscribePerfWarningSignal;
- (void)handleMediaStreamEngineStateStarted;
- (void).cxx_destruct;
- (void)setup;

@end
