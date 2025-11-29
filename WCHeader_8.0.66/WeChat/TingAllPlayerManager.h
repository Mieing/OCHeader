@class NSMutableDictionary, NSString, TingMusicPlayerManager, NSHashTable;
@protocol TingFlowPlayerProtocol;

@interface TingAllPlayerManager : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver>

@property (retain, nonatomic) NSHashTable *playerList;
@property (retain, nonatomic) TingMusicPlayerManager *tingMusicPlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> dissociativePlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> tingMusicChatPlayer;
@property (nonatomic) long long generatedPlayerCount;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (nonatomic) BOOL isHeadsetConnected;
@property (retain, nonatomic) NSMutableDictionary *oncePlayerCompletionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)callOncePlayerCompletion:(id)a0 event:(int)a1;
- (id)standalonePlayerMap;
- (id)reportManager;
- (Class)defaultPlayerClass;
- (id)createDissociativePlayerIfNeed;
- (id)createIsolateDissociativePlayer;
- (id)createPlayerWithClass:(Class)a0 makeActive:(BOOL)a1;
- (long long)generatePlayerId;
- (void)clearAllPlayer;
- (void)stopDeactivePlayers;
- (void)stopDissociativePlayer;
- (void)reloadAllPlayers;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)a0;
- (BOOL)checkIfHeadsetConnected;
- (id)musicChatPlayer;
- (void)playOnce:(id)a0 scene:(int)a1 isAbandonFocusForce:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
