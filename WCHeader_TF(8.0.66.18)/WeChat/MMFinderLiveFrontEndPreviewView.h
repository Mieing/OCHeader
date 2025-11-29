@class NSString, MMLiveCDNPlayerView, WCFinderDataItem, MMLiteAppViewController;
@protocol MMFinderLiveFrontEndPreviewViewChannel;

@interface MMFinderLiveFrontEndPreviewView : UIView <MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) long long lastControlAction;
@property (copy, nonatomic) NSString *anchor;
@property (weak, nonatomic) MMLiteAppViewController *liteApp;
@property (weak, nonatomic) id<MMFinderLiveFrontEndPreviewViewChannel> channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewStartIfNeededWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)startLiveWithAnchor:(id)a0;
- (void)startLive:(id)a0;
- (void)startLive:(id)a0 forPlayControl:(BOOL)a1;
- (void)onPlayBegin;
- (void)sendEvent:(id)a0 data:(id)a1;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)onPlayAudioModeChange:(BOOL)a0;
- (void)onLiveCDNPlayerItem:(id)a0 pixelBufferRendered:(struct __CVBuffer { } *)a1;
- (void)updateWithDictionary:(id)a0;
- (void)updateObjectFit:(id)a0;
- (void)handleJSMethod:(id)a0 params:(id)a1 WithResult:(id /* block */)a2;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)enterLive:(id)a0;
- (void)prepareEnterLive;
- (void).cxx_destruct;

@end
