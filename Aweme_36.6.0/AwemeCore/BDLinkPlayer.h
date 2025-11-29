@class NSTimer, BDLinkPlayInfo, BDLinkConnection, NSObject;
@protocol BDLinkPlayerDelegate;

@interface BDLinkPlayer : NSObject

@property (weak, nonatomic) NSTimer *statusUpdatingTimer;
@property (nonatomic) unsigned long long playStatus;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) BDLinkPlayInfo *lastPlayingItem;
@property (nonatomic) long long quickQueryStatusCount;
@property (nonatomic) double quickQueryTimeInterval;
@property (nonatomic) long long cumulativeQueryErrorTimes;
@property (weak, nonatomic) NSObject<BDLinkPlayerDelegate> *delegate;
@property (retain, nonatomic) BDLinkConnection *connection;
@property (nonatomic) BOOL needCheckUrlRedirect;
@property (nonatomic) BOOL enableStatusQuery;
@property (nonatomic) double statusQueryInterval;

- (void)resumePlay;
- (void)playWithItem:(id)a0;
- (void)setPlaySpeed:(float)a0;
- (void)playWithItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)addVolume;
- (void)reduceVolume;
- (BOOL)canPlayMedia:(unsigned long long)a0;
- (void)playNextDrama;
- (void)playDramaWithDramaId:(id)a0;
- (void)playPreDrama;
- (void)clearDramaList;
- (void)getVolumeInfoWithCallback:(id /* block */)a0;
- (void)getSinkDeviceInfoWithCallback:(id /* block */)a0;
- (id)errorCodeMap;
- (void)playWithItemInternal:(id)a0 completionBlock:(id /* block */)a1;
- (void)receivedInternalMessage:(id)a0;
- (BOOL)isQuickQueryCompleted;
- (BOOL)checkShouldChangeTimerInterval;
- (void)onPlayError:(id)a0;
- (BOOL)canPlayItem:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithConnection:(id)a0;
- (void)startTimer;
- (void)stop;
- (BOOL)canPlay;
- (void)setVolume:(long long)a0;
- (void)updateStatus;
- (void)dealloc;
- (void)seekTo:(long long)a0;

@end
