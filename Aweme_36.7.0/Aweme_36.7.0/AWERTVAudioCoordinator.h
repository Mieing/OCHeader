@class NSPointerArray, NSMutableDictionary, NSString;
@protocol RxInjector, RTVVoipContextManagerInterface;

@interface AWERTVAudioCoordinator : HTSService <RTVVoipObserver, HTSService, AWERTVAudioCoordinatorProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSPointerArray *videoPlayers;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, nonatomic) NSMutableDictionary *playerVolumes;
@property (readonly, nonatomic) NSMutableDictionary *playerAudioDeviceChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (void)voipServiceDidFinish:(id)a0 voip:(id)a1;
- (id)__keyForPlayer:(id)a0;
- (BOOL)__hasHeadset;
- (void)__enumerateVideoPlayersUsingBlock:(id /* block */)a0;
- (BOOL)needSuppressVolumeWithPlayer:(id)a0;
- (double)suppressionVolume;
- (BOOL)containPlayer:(id)a0;
- (BOOL)playerAudioDeviceDidChanged:(id)a0;
- (void)activeSuppressVolume;
- (void).cxx_destruct;

@end
