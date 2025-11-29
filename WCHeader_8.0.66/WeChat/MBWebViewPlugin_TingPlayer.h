@class NSString;
@protocol MBAudioPluginEventDelegate;

@interface MBWebViewPlugin_TingPlayer : WAWebViewPluginBase <TingFlowPlayerNotification, TingEventPluginProtocol>

@property (retain, nonatomic) NSString *albumId;
@property (retain, nonatomic) NSString *audioId;
@property (nonatomic) BOOL isNotifyTingStateChange;
@property (nonatomic) BOOL lastVituralPlayerForegroundState;
@property (weak, nonatomic) id<MBAudioPluginEventDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startObserveTingStateChange;
- (void)stopObserveTingStateChange;
- (void)onSetPlayerForegroundState:(BOOL)a0;
- (void)flowPlayer:(id)a0 onPlayTaskStatusChanged:(int)a1 tingItem:(id)a2 onEvent:(int)a3 withContext:(id)a4;
- (void)flowPlayer:(id)a0 onPlayListRefresh:(id)a1;
- (void)sendBackgroundStateChangeEvent:(id)a0;
- (void).cxx_destruct;

@end
