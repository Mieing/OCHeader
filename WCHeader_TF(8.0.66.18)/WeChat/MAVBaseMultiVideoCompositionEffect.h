@class NSArray, MAVMetalContext, NSString;

@interface MAVBaseMultiVideoCompositionEffect : NSObject <TAVVideoCompositionMixer>

@property (retain, nonatomic) NSArray *lastTrackList;
@property (nonatomic) long long lastRenderPts;
@property (retain, nonatomic) MAVMetalContext *context;
@property (copy, nonatomic) id /* block */ renderCallback;
@property (nonatomic) struct CGSize { double width; double height; } assetSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)destroyCacheFrame;
- (void)destroyTextureCache;
- (id)applyEffectToImageCollection:(id)a0 renderInfo:(id)a1;
- (BOOL)enableRenderPixelBufDirected;
- (void)applyEffectToPixelBufferCollection:(id)a0 renderInfo:(id)a1 toDestPixelBuffer:(struct __CVBuffer { } *)a2;
- (void)renderTracks:(long long)a0 trackList:(id)a1 renderInfo:(id)a2 toPixelBuffer:(struct __CVBuffer { } *)a3;
- (id)createInputTrackListFromPixelBuffer:(id)a0 pts:(long long)a1;
- (void).cxx_destruct;

@end
