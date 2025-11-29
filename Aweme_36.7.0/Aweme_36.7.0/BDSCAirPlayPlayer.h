@class NSString, AVPlayer, AVPlayerItem;
@protocol BDSCConnectionProtocol, BDSCPlayerDelegate;

@interface BDSCAirPlayPlayer : NSObject <BDSCPlayerProtocol>

@property (retain, nonatomic) id<BDSCConnectionProtocol> connection;
@property (nonatomic) double preVolume;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) id playerTimeObserver;
@property (nonatomic) BOOL firstStatusNotified;
@property (copy, nonatomic) NSString *connectionKVOIdentifier;
@property (weak, nonatomic) id<BDSCPlayerDelegate> delegate;
@property (nonatomic) unsigned long long protocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerWithConnection:(id)a0;
+ (BOOL)canCreateByConnection:(id)a0;

- (void)resumePlay;
- (void)videoPlayEnd:(id)a0;
- (void)videoPlayError:(id)a0;
- (void)setPlaySpeed:(float)a0;
- (void)sendMessage:(id)a0 withCallback:(id /* block */)a1;
- (void)clearPlayer;
- (void)addVolume;
- (void)reduceVolume;
- (void)addDramaList:(id)a0 beforeDramaId:(id)a1 completionBlock:(id /* block */)a2;
- (void)setPlaySpeedWithRate:(unsigned long long)a0;
- (void)playWithByteCastPlayerItem:(id)a0 context:(id)a1;
- (BOOL)canChangeConnection:(id)a0;
- (void)changeConnection:(id)a0;
- (void)observeConnection;
- (void)dealWithPlayStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithConnection:(id)a0;
- (void)stop;
- (void)setVolume:(unsigned long long)a0;
- (void)addObserver;
- (void)seekToTime:(double)a0;
- (void)dealloc;

@end
