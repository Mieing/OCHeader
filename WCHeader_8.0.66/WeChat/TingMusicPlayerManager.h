@class NSMutableSet;
@protocol TingFlowPlayerProtocol;

@interface TingMusicPlayerManager : NSObject

@property (retain, nonatomic) id<TingFlowPlayerProtocol> globalPlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> activePlayer;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> restoredPlayer;
@property (retain, nonatomic) NSMutableSet *listeners;

- (id)init;
- (void)addPlayTaskControllerListener:(id)a0;
- (void)removePlayTaskControllerListener:(id)a0;
- (void)onPlayerChanged;
- (id)playingTask;
- (void)makePlayerActive:(id)a0;
- (void)restoreInterruptedPlayer:(id)a0;
- (id)popRestorePlayer;
- (void)makeIsolateDissociativePlayerActive:(id)a0;
- (void)flushWatiingNotifyPlayer;
- (void)appWillEnterForeground;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onEvent:(int)a2 error:(id)a3;
- (void)flowPlayer:(id)a0 willChangeFromCurrentSource:(id)a1 targetSource:(id)a2;
- (void)flowPlayer:(id)a0 onPlayTaskStatusChanged:(int)a1 tingItem:(id)a2 onEvent:(int)a3 withContext:(id)a4;
- (void).cxx_destruct;

@end
