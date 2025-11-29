@class AVAudioPlayer, NSString, RTVVoipSession, AWEAVPlayerWrapper;
@protocol RTVVoipRingtoneMusicModelProtocol, RTVVoipRingtoneComponentInterface, RTVXRControllerInjector, RTVVoipResourceFetcherInterface;

@interface RTVVoipRingtonePlayerComponent : NSObject <AWEAVPlayerWrapperDelegate, RTVVoipSessionObserver, AVAudioPlayerDelegate, RTVVoipRingtonePlayerComponentInterface>

@property (retain, nonatomic) AWEAVPlayerWrapper *audioPlayer;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) unsigned long long ringtoneStatus;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> playingMusicModel;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> playingPanelSelectedMusic;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> playingRingtoneMusic;
@property (retain, nonatomic) AVAudioPlayer *player;
@property (retain, nonatomic) NSString *playingRingtoneRoomId;
@property (retain, nonatomic) id<RTVVoipResourceFetcherInterface> resourceIMP;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) id<RTVVoipRingtoneComponentInterface> ringtoneComponent;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long playStatus;
@property (readonly, nonatomic) BOOL canBackgroundPlay;

+ (id)audioPlayerWrapperConfig;

- (void)rtv_awakeFromControllerInjector;
- (void)playerWrapper:(id)a0 didChangePlayStatus:(unsigned long long)a1;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)observeVoipModel:(id)a0;
- (void)observeVoipModelWithAsyncMainQueue:(id)a0;
- (void)playPanelSelectdMusicModel:(id)a0 audioPlayerPlayingBlock:(id /* block */)a1;
- (void)pausePanelSelectedMusicModel;
- (void)stopPlayRingtoneWithModel:(id)a0;
- (id)__getSoundPath:(id)a0;
- (id)__getSoundFullPath:(id)a0;
- (void)p_playRingtoneIfNeed:(id)a0;
- (void)p_stopPlayMusic;
- (void)p_playWithMusicModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
