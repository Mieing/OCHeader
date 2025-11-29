@class NSDictionary, NSString, BDByteScreenCastContext;
@protocol BDSCPlayerProtocol;

@interface BDByteScreenCastDurationHeartbeatTracker : NSObject <BDSCPlayerDelegate>

@property (nonatomic) BOOL stalled;
@property (nonatomic) double lastTrackTime;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *playParams;
@property (nonatomic) long long videoPlayStartTime;
@property (nonatomic) long long currentVideoTotalDuration;
@property (nonatomic) long long errorTimes;
@property (weak, nonatomic) BDByteScreenCastContext *context;
@property (retain, nonatomic) id<BDSCPlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackVideoPlay;
- (void)onPlayProgressChanged:(id)a0;
- (void)trackDurationHeartbeat;
- (void)updateCommonParamsIfNeeded;
- (void)castPlayStalled;
- (void)castPlayResumed;
- (BOOL)hasCastLaunch;
- (void)stopDurationHeartbeatTrack;
- (void)player:(id)a0 onError:(id)a1;
- (void)player:(id)a0 playStatus:(unsigned long long)a1;
- (void)player:(id)a0 progressInfo:(id)a1;
- (void)player:(id)a0 dlnaMediaInfo:(id)a1;
- (void)player:(id)a0 changeClarity:(id)a1;
- (void)player:(id)a0 onCMDErrorCode:(long long)a1;
- (void)player:(id)a0 onPushCompletionWithError:(id)a1;
- (void)playerStatusCallbackException:(id)a0;
- (void)player:(id)a0 stretchModel:(unsigned long long)a1;
- (void)player:(id)a0 speedList:(id)a1;
- (void)player:(id)a0 speed:(float)a1;
- (void)player:(id)a0 onDramaId:(id)a1;
- (void)player:(id)a0 onMediaInfo:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
