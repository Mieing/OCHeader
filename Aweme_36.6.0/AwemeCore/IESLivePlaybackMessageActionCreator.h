@class HTSLiveEpisode, NSString, NSDictionary, NSNumber;
@protocol IESLiveVideoPreviewPlayerData, IESLiveVideoPreviewStreamPaidDelegate, IESLiveVideoPreviewStreamPlayerDelegate;

@interface IESLivePlaybackMessageActionCreator : IESVSRoomMessageActionCreator <IESVSVideoPlayAction, IESLiveAirPlayAction, IESLivePlaybackSeekAction, IESLiveVideoPreviewStreamPlayerProtocol, IESLivePlaybackMessageActionCreatorProtocol>

@property (retain, nonatomic) HTSLiveEpisode *videoRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESLiveVideoPreviewPlayerData> episode;
@property (readonly, nonatomic) NSNumber *episodeID;
@property (readonly, copy, nonatomic) NSString *playInfo;
@property (weak, nonatomic) id<IESLiveVideoPreviewStreamPlayerDelegate> delegate;
@property (weak, nonatomic) id<IESLiveVideoPreviewStreamPaidDelegate> paidDelegate;
@property (nonatomic) double volume;
@property (nonatomic) BOOL mute;
@property (readonly, nonatomic) BOOL isLoop;
@property (nonatomic) long long playState;
@property (readonly, nonatomic) double durationTime;
@property (readonly, nonatomic) double currPlaybackTime;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) double playbackSpeed;
@property (nonatomic) BOOL enableResolutionAutoDemotion;

- (void)didSetAttachingDIContext;
- (void)onAirplayProgressUpdate:(double)a0 duration:(double)a1;
- (void)onAirplayPlay;
- (void)onAirplayPause;
- (void)onSeekEnd;
- (void)updatePlaybackRoomWithEpisode:(id)a0;
- (void)updatePlaybackDistributeWithEpisode:(id)a0;
- (void)startInPlaybackDistribute;
- (void)onVideoProgressUpdate:(double)a0 duration:(double)a1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoFinish;
- (long long)calcFlowTimeWithPlaybackTime:(double)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;

@end
