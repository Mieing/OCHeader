@class BDByteCastPlayer, NSString, NSTimer, BDScreenCastPlayItem, BDByteScreenCastTracker, BDSCURLResourceTracer;
@protocol BDSCPlayerDelegate, BDSCConnectionProtocol, BDSCManufacturerProtocol;

@interface BDSCPlayer : NSObject <BDByteCastPlayerDelegate, BDSCPlayerProtocol>

@property (retain, nonatomic) BDByteCastPlayer *byteCastPlayer;
@property (retain, nonatomic) id<BDSCConnectionProtocol> connection;
@property (retain, nonatomic) id<BDSCManufacturerProtocol> manufacturer;
@property (retain, nonatomic) BDScreenCastPlayItem *curPlayItem;
@property (retain, nonatomic) BDByteScreenCastTracker *tracker;
@property (retain, nonatomic) BDSCURLResourceTracer *tracer;
@property (nonatomic) BOOL newVideoForCast;
@property (nonatomic) BOOL didReceiveXsgStatusChanged;
@property (nonatomic) BOOL hasPlayComplete;
@property (retain, nonatomic) NSTimer *completeTimer;
@property (retain, nonatomic) NSTimer *exceptionTimer;
@property (nonatomic) unsigned long long playStatus;
@property (nonatomic) BOOL didReceivePlayStatus;
@property (weak, nonatomic) id<BDSCPlayerDelegate> delegate;
@property (nonatomic) unsigned long long protocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerWithConnection:(id)a0;
+ (BOOL)canCreateByConnection:(id)a0;

- (void)resumePlay;
- (void)setPlaySpeed:(float)a0;
- (void)sendMessage:(id)a0 withCallback:(id /* block */)a1;
- (void)updatePlayStatus:(unsigned long long)a0;
- (void)byteCastPlayer:(id)a0 onError:(id)a1;
- (void)byteCastPlayer:(id)a0 playStatus:(unsigned long long)a1;
- (void)byteCastPlayer:(id)a0 progressInfo:(id)a1;
- (void)byteCastPlayer:(id)a0 dlnaMediaInfo:(id)a1;
- (void)byteCastPlayer:(id)a0 onErrorWithErrorCode:(long long)a1;
- (void)byteCastPlayer:(id)a0 onDramaId:(id)a1;
- (void)byteCastPlayer:(id)a0 onMediaInfoUpdate:(id)a1;
- (BOOL)supportAutoResolution;
- (void)addVolume;
- (void)reduceVolume;
- (void)clearDramaList;
- (void)addDramaList:(id)a0 beforeDramaId:(id)a1 completionBlock:(id /* block */)a2;
- (void)setStretchMode:(long long)a0;
- (void)setPlaySpeedWithRate:(unsigned long long)a0;
- (void)playWithByteCastPlayerItem:(id)a0 context:(id)a1;
- (BOOL)canChangeConnection:(id)a0;
- (void)changeConnection:(id)a0;
- (void)setPlayLoopMode:(long long)a0;
- (void)updateStatusFromMessageParams:(id)a0;
- (void)setAutoResolution:(id)a0;
- (void)stopCompleteTimer;
- (void)stopExceptionTimer;
- (id)manufacturerWithByteCastService:(id)a0;
- (void)realStartPlayWithPlayerItem:(id)a0 context:(id)a1;
- (void)checkPlayerStatusWithConnection:(id)a0;
- (void)startCompleteTimerWithTimeInterval:(double)a0;
- (void)setResolution:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithConnection:(id)a0;
- (void)stop;
- (void)setVolume:(unsigned long long)a0;
- (void)seekToTime:(double)a0;
- (void)setSkip:(BOOL)a0;
- (void)dealloc;

@end
