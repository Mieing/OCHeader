@class MMLiveCDNPlayerItem, NSString;
@protocol IMBPublicServiceDispatcher;

@interface MBFinderLivePlayerItem : NSObject <MMLiveCDNPlayerItemDelegate>

@property (weak, nonatomic) id<IMBPublicServiceDispatcher> dispatcher;
@property (nonatomic) long long playerId;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) MMLiveCDNPlayerItem *cdnPlayerItem;
@property (retain, nonatomic) NSString *playUrl;
@property (nonatomic) long long liveInfoReqStatus;
@property (nonatomic) BOOL isWaitingPlay;
@property (nonatomic) BOOL isDestroy;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) NSString *finder_object_id;
@property (readonly, nonatomic) NSString *finder_export_id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderObjectId:(id)a0 exportId:(id)a1 width:(int)a2 height:(int)a3 playerId:(long long)a4 dispatcher:(id)a5;
- (void)startPlay:(id /* block */)a0;
- (void)stopPlay:(id /* block */)a0;
- (void)destroy;
- (void)setMute:(BOOL)a0;
- (void)requestFinderLiveInfoIfNeed:(id /* block */)a0;
- (void)innerStartPlay:(id /* block */)a0;
- (void)playUrlAndtryUpdateCategroy;
- (void)dealloc;
- (void)releaseCurrentPixelBufferIfNeed;
- (void)onLiveCDNPlayerItem:(id)a0 pixelBufferRendered:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)cropYUVPixelBuffer:(struct __CVBuffer { } *)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLiveCDNPlayerItem:(id)a0 playEvent:(int)a1 withParam:(id)a2;
- (void).cxx_destruct;

@end
