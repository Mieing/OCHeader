@class NSString, NSMutableDictionary, NSMutableSet, NSHashTable;
@protocol TingFlowPlayerProtocol;

@interface TingPlayerManager : NSObject <TingPlayTaskController, IRemoteControlCheckExt, MMImageLoaderObserver>

@property (retain, nonatomic) NSMutableSet *listeners;
@property (retain, nonatomic) NSMutableDictionary *standalonePlayerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable *playerList;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> globalPlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> activePlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> restoredPlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> dissociativePlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> globalMusicChatPlayer;
@property (nonatomic) long long generatedPlayerCount;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (nonatomic) BOOL isHeadsetConnected;
@property (retain, nonatomic) NSMutableDictionary *oncePlayerCompletionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playingTask;
- (id)createTask:(id)a0;
- (id)createStandaloneTask:(id)a0;
- (BOOL)destroyStandaloneTask:(id)a0;
- (BOOL)makeTaskGlobal:(id)a0;
- (void)addPlayTaskControllerListener:(id)a0;
- (void)removePlayTaskControllerListener:(id)a0;
- (void)onPlayerChanged;
- (id)init;
- (void)callOncePlayerCompletion:(id)a0 event:(int)a1;
- (id)reportManager;
- (Class)defaultPlayerClass;
- (void)createMusicChatPlayer;
- (id)musicChatPlayer;
- (id)createDissociativePlayerIfNeed;
- (id)createIsolateDissociativePlayer;
- (void)makeIsolateDissociativePlayerActive:(id)a0;
- (id)createPlayerWithClass:(Class)a0 makeActive:(BOOL)a1;
- (void)makePlayerActive:(id)a0;
- (long long)generatePlayerId;
- (void)flushWatiingNotifyPlayer;
- (void)clearAllPlayer;
- (void)stopDeactivePlayers;
- (void)stopDissociativePlayer;
- (void)restoreInterruptedPlayer:(id)a0;
- (id)popRestorePlayer;
- (void)reloadAllPlayers;
- (void)playOnce:(id)a0 scene:(int)a1 completion:(id /* block */)a2;
- (void)playOnce:(id)a0 scene:(int)a1 isAbandonFocusForce:(BOOL)a2 completion:(id /* block */)a3;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)a0;
- (BOOL)checkIfHeadsetConnected;
- (void)appWillEnterForeground;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onEvent:(int)a2 error:(id)a3;
- (void)flowPlayer:(id)a0 willChangeFromCurrentSource:(id)a1 targetSource:(id)a2;
- (void)flowPlayer:(id)a0 onPlayTaskStatusChanged:(int)a1 tingItem:(id)a2 onEvent:(int)a3 withContext:(id)a4;
- (void).cxx_destruct;

@end
