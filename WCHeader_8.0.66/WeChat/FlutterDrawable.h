@class NSString, CAMetalLayer, FlutterMetalLayer, FlutterTexture;
@protocol MTLTexture;

@interface FlutterDrawable : NSObject <FlutterMetalDrawable> {
    FlutterTexture *_texture;
    FlutterMetalLayer *_layer;
    unsigned long long _drawableId;
    BOOL _presented;
}

@property (readonly) id<MTLTexture> texture;
@property (readonly) CAMetalLayer *layer;
@property (readonly, nonatomic) double presentedTime;
@property (readonly, nonatomic) unsigned long long drawableID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTexture:(id)a0 layer:(id)a1 drawableId:(unsigned long long)a2;
- (void)present;
- (void)dealloc;
- (void)addPresentedHandler:(id /* block */)a0;
- (void)presentAtTime:(double)a0;
- (void)presentAfterMinimumDuration:(double)a0;
- (void)flutterPrepareForPresent:(id)a0;
- (void).cxx_destruct;

@end
