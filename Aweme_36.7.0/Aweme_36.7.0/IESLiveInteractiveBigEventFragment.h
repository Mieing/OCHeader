@class NSString, IESLiveKTVResourceManager;

@interface IESLiveInteractiveBigEventFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveSocialInteractAction>

@property (retain, nonatomic) IESLiveKTVResourceManager *resourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)currentServerLayoutWillChangedFrom:(id)a0 to:(id)a1;
- (void)startInteractiveScene:(id)a0;
- (void)stopInteractiveScene:(id)a0;
- (void)switchInteractiveScene:(id)a0;
- (void)switchEarRetunStatus:(id)a0;
- (void)switchKTVMode:(id)a0;
- (void)switchLyricStatus:(id)a0;
- (void)switchFullSongStatus:(id)a0;
- (void)switchTuningEffect:(id)a0;
- (void)switchJoinChorus;
- (void)switchSongVolume:(id)a0;
- (void)reportTuningInfo;
- (void)switchSilenceStatus:(int)a0;
- (void)downloadSongsInAdvance:(id)a0;
- (void)switchBackgroundStatus:(id)a0;
- (void)turnOverCamera:(id)a0;
- (void)monitorMessageReceived:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
