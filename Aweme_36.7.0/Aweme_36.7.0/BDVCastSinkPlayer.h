@protocol BDVCastSinkPlayerDelegate;

@interface BDVCastSinkPlayer : BDVCastMirrorSink

@property (nonatomic) unsigned long long videoPeriodTotalBytes;
@property (nonatomic) long long videoPeriodTotalFrames;
@property (nonatomic) double startRecvVideoTime;
@property (nonatomic) long long videoPeriodCount;
@property (nonatomic) unsigned long long audioPeriodTotalBytes;
@property (nonatomic) long long audioPeriodTotalFrames;
@property (nonatomic) double startRecvAudioTime;
@property (nonatomic) long long audioPeriodCount;
@property (nonatomic) long long castStartTime;
@property (nonatomic) long long castEndTime;
@property (weak, nonatomic) id<BDVCastSinkPlayerDelegate> delegate;
@property (nonatomic) long long lastDecodedAudioPts;
@property (nonatomic) long long lastDecodedVideoPts;

- (void)resetTrackerParams;
- (void)didStartWithType:(int)a0;
- (void)didConnectWithType:(int)a0 ip:(id)a1 port:(int)a2 data:(id)a3;
- (BOOL)onCastRequestWithIP:(id)a0 token:(id)a1;
- (void)onCastCancelWithIP:(id)a0 startTime:(long long)a1 endTime:(long long)a2;
- (void)didDisconnectWithType:(int)a0 ip:(id)a1 port:(int)a2 reason:(int)a3 data:(id)a4;
- (void)trackDisconnectEvent:(int)a0 info:(id)a1;
- (void)onVideoData:(id)a0 pts:(unsigned long long)a1;
- (void)trackReceiveVideo:(unsigned long long)a0;
- (void)onAudioData:(id)a0 pts:(unsigned long long)a1;
- (void)trackReceiveAudio:(unsigned long long)a0;
- (void)onLogWithLevel:(int)a0 content:(id)a1;
- (void)onStuckWithStuckMs:(int)a0 stuckMsTotal:(int)a1 stuckCount:(int)a2 pts:(unsigned int)a3 isVideo:(BOOL)a4;
- (void).cxx_destruct;
- (void)didStop;

@end
