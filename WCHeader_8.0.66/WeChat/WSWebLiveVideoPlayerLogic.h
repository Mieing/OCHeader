@class MMLiveCDNPlayerView, WCFinderDataItem, NSString;

@interface WSWebLiveVideoPlayerLogic : WSWebNativeVideoPlayerLogic <MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (retain, nonatomic) NSString *streamUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewId:(unsigned int)a0 andFinderDataItem:(id)a1 andDelegate:(id)a2;
- (id)initWithViewId:(unsigned int)a0 andStreamUrl:(id)a1 andDelegate:(id)a2;
- (void)dealloc;
- (id)createPlayerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)a0;
- (void)setMuted:(BOOL)a0;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void).cxx_destruct;

@end
