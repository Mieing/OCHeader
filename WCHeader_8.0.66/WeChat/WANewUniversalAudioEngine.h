@class WAUniversalAudioPlayerCachePool, NSMutableDictionary, NSString, AVAudioMixerNode, AVAudioEngine, NSObject;
@protocol OS_dispatch_queue;

@interface WANewUniversalAudioEngine : NSObject <WAUniversalAudioEngineProtocol> {
    BOOL connected;
}

@property (retain, nonatomic) AVAudioEngine *_audioengine;
@property (retain, nonatomic) NSMutableDictionary *playerPool;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (retain, nonatomic) WAUniversalAudioPlayerCachePool *cachePool;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue;
@property (nonatomic) BOOL isSessionInterrupted;
@property BOOL _started;
@property (retain, nonatomic) AVAudioMixerNode *mixerNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 fileQueue:(id)a1;
- (void)dealloc;
- (void)createPlayerWithAudioID:(id)a0;
- (void)installTapOnOutputWithBufferSize:(unsigned int)a0 block:(id /* block */)a1;
- (void)removeTapOnOutput;
- (void)removeTapOnOutput:(BOOL)a0;
- (void)operatePlayerWithAudioID:(id)a0 block:(id /* block */)a1;
- (BOOL)start;
- (void)pause;
- (void)stop;
- (void)stop:(BOOL)a0;
- (void)__stop:(BOOL)a0;
- (BOOL)isStarted;
- (void)playerWillLoad:(id)a0;
- (void)playerDidLoad:(id)a0;
- (void)playerDidDestroy:(id)a0;
- (BOOL)playerCanPlay:(id)a0 error:(id *)a1;
- (void)playerDidStop:(id)a0;
- (void)playerDidPause:(id)a0;
- (void)playerDidFinishPlaying:(id)a0;
- (void)playerDidError:(id)a0 error:(id)a1;
- (BOOL)playerCanScheduleData:(id)a0 error:(id *)a1;
- (void)fixIOCycleCrash;
- (void)connectPlayerIfNeeded:(id)a0;
- (void)connectMixerIfNeed;
- (BOOL)playerConnected:(id)a0 engine:(id)a1;
- (BOOL)startEngineAndReturnError:(id *)a0;
- (void)makeEngineConnections:(id)a0;
- (void)disconnectNode:(id)a0;
- (void)attachNode:(id)a0;
- (void)detachNode:(id)a0;
- (void)handleEngineConfigurationChanged:(id)a0;
- (void)handleInterruption:(id)a0;
- (void)handleMediaServicesReset:(id)a0;
- (void)terminateOldPlayersAndRenew;
- (void).cxx_destruct;

@end
