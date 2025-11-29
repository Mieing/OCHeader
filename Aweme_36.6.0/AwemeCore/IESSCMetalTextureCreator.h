@class NSString;

@interface IESSCMetalTextureCreator : NSObject <IESSCMetalTextureCreator>

@property (nonatomic) struct __CVMetalTextureCache { } *textureCacheRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeTextureWithPixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(int)a1 pixelFormat:(unsigned long long)a2;
- (void)cleanCache;
- (id)init;
- (id)initWithDevice:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)dealloc;

@end
