@class NSString, HTSEventContext, NSDate;
@protocol IESLiveMonitor;

@interface IESLiveStreamPlayerTrackEventPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerTrackEventPluginProtocol>

@property (nonatomic, getter=isReuse) BOOL reuse;
@property (nonatomic) BOOL tracked;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *blockStartTime;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (copy, nonatomic) NSString *enterRoomTypeString;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)startTrack;
- (void)endTrack;
- (void)endTrackWithDuration:(double)a0;
- (void)trackEpisodeFinish;
- (void)trackTimeCostWithAPIName:(id)a0 timeDurationSeconds:(double)a1 stage:(id)a2 params:(id)a3;
- (void)trackerFirstFrameDuration:(double)a0;
- (void)trackerPlayerDidStall;
- (void)trackerPlayerResumeStall;
- (void)pe_commonInit;
- (void)pe_stopWithCallTrace:(id)a0;
- (void)pe_onStreamFinishByMessage;
- (void).cxx_destruct;

@end
