@class NSString, NSTimer, NSMutableDictionary, BDLEConnection, BDByteCastPPMediaInfo, NSObject;
@protocol BDLEPlayerDelegate;

@interface BDLEPlayer : NSObject <BDLEConnectionNotifyDelegate>

@property (weak, nonatomic) NSTimer *mediaStatusQueryTimer;
@property (weak, nonatomic) NSTimer *heartbeatTimer;
@property (nonatomic) unsigned long long playStatus;
@property (nonatomic) long long currentPosition;
@property (nonatomic) long long totalDuration;
@property (copy, nonatomic) NSString *currentDramaId;
@property (retain, nonatomic) BDByteCastPPMediaInfo *currentMediaInfo;
@property (retain, nonatomic) NSMutableDictionary *dramaBeanCache;
@property (weak, nonatomic) NSObject<BDLEPlayerDelegate> *delegate;
@property (retain, nonatomic) BDLEConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateMapSyncWithDLNA;
+ (id)stateMap;

- (void)resumePlay;
- (void)setPlaySpeed:(float)a0;
- (void)playWithItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)addVolume;
- (void)reduceVolume;
- (BOOL)canPlayMedia:(unsigned long long)a0;
- (void)playNextDrama;
- (void)playDramaWithDramaId:(id)a0;
- (void)playPreDrama;
- (void)clearDramaList;
- (void)deleteDramaList:(id)a0;
- (void)addDramaList:(id)a0 beforeDramaId:(id)a1 completionBlock:(id /* block */)a2;
- (void)setRepeatMode:(long long)a0 completionBlock:(id /* block */)a1;
- (id)remoteDramaIds;
- (void)playDramaWithDramaId:(id)a0 completionBlock:(id /* block */)a1;
- (void)setLoopMode:(long long)a0 shuffle:(long long)a1;
- (void)setStretchMode:(long long)a0;
- (void)setSkipHeadTail:(BOOL)a0;
- (void)setDanmaku:(id)a0;
- (void)setResolution:(id)a0 urlType:(id)a1 url:(id)a2 mode:(long long)a3;
- (void)getStatusInfo;
- (void)getMediaInfo;
- (void)bdleConnection:(id)a0 onDisconnect:(id)a1;
- (void)bdleConnection:(id)a0 didReceiveSinkRequest:(id)a1;
- (void)addDramaCache:(id)a0;
- (void)stopMediaStatusQueryTimer;
- (void)stopHeartbeatTimer;
- (void)removeDramaCache:(id)a0;
- (void)onStatusInfoUpdate:(id)a0 isPush:(BOOL)a1;
- (void)onMediaInfoUpdate:(id)a0;
- (void)onReceiveRuntimeInfo:(id)a0;
- (void)mediaStatusQueryTimerFired:(id)a0;
- (void)heartbeatTimerFired:(id)a0;
- (void)sendHeartbeat;
- (void)startMediaStatusQueryTimer;
- (void)startHeartbeatTimer;
- (void)onStatusInfoUpdateV2:(id)a0 isPush:(BOOL)a1;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithConnection:(id)a0;
- (void)stop;
- (void)setSubtitle:(id)a0;
- (void)setVolume:(long long)a0;
- (void)dealloc;
- (void)seekTo:(long long)a0;
- (void)getVolume:(id /* block */)a0;

@end
