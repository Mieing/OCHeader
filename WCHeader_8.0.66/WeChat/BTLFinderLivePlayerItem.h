@class NSString, FinderLivePlayInfo, MMLiveCDNPlayerItem, NSObject, BizFinderLivePlayersCallbackApi;
@protocol FlutterTextureRegistry;

@interface BTLFinderLivePlayerItem : NSObject <MMLiveCDNPlayerItemDelegate, FlutterTexture>

@property (retain, nonatomic) MMLiveCDNPlayerItem *cdnPlayerItem;
@property (retain, nonatomic) NSString *playUrl;
@property (nonatomic) long long liveInfoReqStatus;
@property (nonatomic) BOOL isWaitingPlay;
@property (nonatomic) BOOL isDestory;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) BOOL hasCallbackFirstFrame;
@property (readonly, nonatomic) FinderLivePlayInfo *playInfo;
@property (readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (readonly, nonatomic) BizFinderLivePlayersCallbackApi *callback;
@property (readonly, nonatomic) long long playerId;
@property (readonly, nonatomic) long long textureId;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayInfo:(id)a0 registry:(id)a1 callback:(id)a2;
- (void)dealloc;
- (void)setPlayInfo:(id)a0;
- (void)startPlay;
- (void)playUrlAndtryUpdateCategroy;
- (void)stopPlay;
- (void)destory;
- (void)requestFinderLiveInfoIfNeed;
- (void)releaseCurrentPixelBufferIfNeed;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)a0;
- (void)onLiveCDNPlayerItem:(id)a0 pixelBufferRendered:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)cropYUVPixelBuffer:(struct __CVBuffer { } *)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLiveCDNPlayerItem:(id)a0 playEvent:(int)a1 withParam:(id)a2;
- (void).cxx_destruct;

@end
