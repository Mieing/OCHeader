@class NSString, NSDictionary, IESLiveLinkRTCChorusSpatialAudio, IESLiveLinkMultiChorusMixedParam, IESLiveLinkRealTimeChorusRTCClient;

@interface IESLiveLinkRealTimeChorusElement : IESLiveLinkBizBaseElement <IESLiveLinkTranscoderEventDelegate, IESLiveLinkTranscoderManagerObserver, IESLiveLinkTranscoderEventDelegate, IESLiveLinkRealTimeChorusElementProtocol>

@property (nonatomic) BOOL isChorusScene;
@property (nonatomic) BOOL isVideoChorus;
@property long long role;
@property (copy, nonatomic) NSString *leaderUid;
@property (copy, nonatomic) NSString *extraRoomID;
@property (retain, nonatomic) IESLiveLinkMultiChorusMixedParam *multiChorusParam;
@property (copy, nonatomic) NSString *choursCNDBaseUID;
@property (copy, nonatomic) NSDictionary *chorusConfig;
@property (copy, nonatomic) NSString *chorusSubRtcExtInfo;
@property BOOL visibility;
@property (retain, nonatomic) IESLiveLinkRTCChorusSpatialAudio *chorusSpatialAudio;
@property (retain, nonatomic) IESLiveLinkRealTimeChorusRTCClient *realTimeChorusRTCClient;
@property (nonatomic) double baseStreamStartDelayMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)bizType;
- (void)startRealTimeChorus;
- (void)initChorusEncodeConfig:(id)a0;
- (void)setRealTimeChorusInfo:(id)a0 visibility:(BOOL)a1 config:(id)a2;
- (void)updateChoursCNDBaseUID:(id)a0;
- (void)setRealTimeChorusRole:(long long)a0;
- (void)setLeaderSingerUid:(id)a0;
- (void)stopRealTimeChorus;
- (void)setRealTimeChorusScene:(BOOL)a0;
- (void)setVideoChorus:(BOOL)a0;
- (void)setVideoChorusBaseStreamStartDelayMs:(double)a0;
- (void)enableChorusSpatialAudio:(long long)a0 spatialAudioDistanceParam:(int)a1;
- (void)disableChorusSpatialAudio;
- (void)updateSingerList:(id)a0;
- (void)updateExRoomSubscribeState:(id)a0 subscribe:(BOOL)a1 mediaType:(unsigned long long)a2;
- (void)updateMusicCodecConfig:(BOOL)a0 streamIndex:(long long)a1 encodeConfig:(id)a2;
- (void)setAudioAlignmentProperty:(id)a0 mainRoomID:(id)a1 mode:(long long)a2;
- (void)updateUserPublishStream:(id)a0 type:(unsigned long long)a1;
- (void)updateUserUnpublishStream:(id)a0 type:(unsigned long long)a1;
- (id)initWithCommonContext:(id)a0 liveCore:(id)a1 rtcClient:(id)a2 liveLink:(id)a3;
- (void)liveLinkTranscoder:(id)a0 willUpdateMixedStream:(id)a1 taskID:(id)a2;
- (void)onTranscoderCreated:(id)a0 mixType:(long long)a1;
- (BOOL)isRealtimeChorusViceSingerWithRole:(long long)a0;
- (void)updateMainRoomSubscribeState:(id)a0 subscribe:(BOOL)a1 mediaType:(unsigned long long)a2;
- (id)chorusExRoom;
- (id)mainRoomID;
- (void)setAudioAlignment:(id)a0 mainRoomID:(id)a1 mode:(long long)a2;
- (void)updateChorusAudioScene:(BOOL)a0;
- (void)updateSDKConfigParams:(BOOL)a0;
- (void)updateMusicCodecConfig:(BOOL)a0;
- (void)updateRoleAndTimeMode:(BOOL)a0;
- (void)updateMusicCodecConfig:(BOOL)a0 encodeConfig:(id)a1;
- (id)mainRoom;
- (void).cxx_destruct;

@end
