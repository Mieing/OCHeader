@class NSMutableDictionary, NSString, FlutterEventChannel, NSObject;
@protocol FlutterBinaryMessenger, FlutterTextureRegistry;

@interface FlutterThumbPlayerPluginImpl : NSObject <FlutterStreamHandler, MMFlutterPlugin, TPFlutterApi>

@property (readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (readonly, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (retain, nonatomic) FlutterEventChannel *playerEventChannel;
@property (copy, nonatomic) id /* block */ playerEventSink;
@property (retain, nonatomic) NSMutableDictionary *playerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)initWithRegistry:(id)a0 messenger:(id)a1;
- (id)generatePlayerId;
- (id)createPlayerForMediaType:(long long)a0 playerId:(id)a1 playReportDict:(id)a2;
- (id)tpPlayerCreateMediaType:(long long)a0 playReportDict:(id)a1 error:(id *)a2;
- (id)tpPlayerInitParams:(id)a0 error:(id *)a1;
- (id)tpPlayerSetMediaInfoParams:(id)a0 error:(id *)a1;
- (id)tpPlayerSetMediaProtoParams:(id)a0 error:(id *)a1;
- (id)tpPlayerPreparePlayerId:(long long)a0 error:(id *)a1;
- (id)tpPlayerPlayPlayerId:(long long)a0 error:(id *)a1;
- (id)tpPlayerPausePlayerId:(long long)a0 isManualPause:(BOOL)a1 error:(id *)a2;
- (id)tpPlayerSeekParams:(id)a0 error:(id *)a1;
- (id)tpPlayerSetPlayRangeParams:(id)a0 error:(id *)a1;
- (id)tpPlayerGetPlayRangePlayerId:(long long)a0 error:(id *)a1;
- (id)tpPlaySetScaleTypeParams:(id)a0 error:(id *)a1;
- (id)tpPlayerSetMuteParams:(id)a0 error:(id *)a1;
- (id)tpPlayerSetStreamTypeParams:(id)a0 error:(id *)a1;
- (id)tpPlayerSetLoopParams:(id)a0 error:(id *)a1;
- (id)tpUpdateDisplaySizeParams:(id)a0 error:(id *)a1;
- (id)tpStopPlayerId:(long long)a0 error:(id *)a1;
- (id)tpReleasePlayerId:(long long)a0 error:(id *)a1;
- (id)tpAddEffectEffect:(id)a0 error:(id *)a1;
- (id)tpUpdateEffectEffect:(id)a0 error:(id *)a1;
- (id)tpRemoveEffectEffect:(id)a0 error:(id *)a1;
- (id)tpClearEffectPlayerId:(long long)a0 error:(id *)a1;
- (id)tpSetProgressListenerPlayerId:(long long)a0 error:(id *)a1;
- (id)tpSetOnPreparedListenerPlayerId:(long long)a0 error:(id *)a1;
- (id)tpSetPlayCompletedListenerPlayerId:(long long)a0 error:(id *)a1;
- (id)tpSetOnFirstFrameRenderedListenerPlayerId:(long long)a0 error:(id *)a1;
- (id)tpSetOnPlayerShowBufferingListenerPlayerId:(long long)a0 error:(id *)a1;
- (id)tpSetOnPlayerHideBufferingListenerPlayerId:(long long)a0 error:(id *)a1;
- (id)tpSetOnPlayerStateChangeListenerPlayerId:(long long)a0 error:(id *)a1;
- (id)tpGetVideoSizePlayerId:(long long)a0 error:(id *)a1;
- (void)tpPreloadParams:(id)a0 error:(id *)a1;
- (id)tpSetPlaySpeedPlayerId:(long long)a0 ratio:(double)a1 error:(id *)a2;
- (id)tpGetPlayerContextPlayerId:(long long)a0 error:(id *)a1;
- (id)tpGetPlayerStatePlayerId:(long long)a0 error:(id *)a1;
- (id)tpGetFeedbackInfoPlayerId:(long long)a0 error:(id *)a1;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (id)getPlayerForId:(id)a0 clear:(BOOL)a1;
- (id)firstPlayerMatch:(id /* block */)a0;
- (void).cxx_destruct;

@end
