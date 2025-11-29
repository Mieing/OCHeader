@class MagicBrushCVPixelBufferRT, NSMapTable;

@interface WAMagicBrushCanvasCaptureInfo : NSObject

@property (retain, nonatomic) MagicBrushCVPixelBufferRT *rendertarget;
@property (retain, nonatomic) NSMapTable *delegateMap;

- (id)init;
- (void).cxx_destruct;

@end
