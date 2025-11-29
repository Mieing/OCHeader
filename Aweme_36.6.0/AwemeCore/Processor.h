@class BmfSharp, BmfSuperResolution, SharpenProcessor;

@interface Processor : NSObject

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) SharpenProcessor *sharpenProcessor;
@property (retain, nonatomic) BmfSharp *bmfSharpenProcessor;
@property (retain, nonatomic) BmfSuperResolution *bmfSuperResolution;

- (id)processVideo:(struct __CVBuffer { } *)a0;
- (id)encodeWithTexture:(id)a0 rotation:(long long)a1 renderPassDescriptor:(id)a2 commandBuffer:(id)a3;
- (id)initWithDevice:(id)a0 mtlLibrary:(id)a1 mtkView:(id)a2 vertexBuffer:(id)a3 width:(double)a4 height:(double)a5 processorType:(id)a6;
- (void)processY:(id)a0;
- (void)processY:(id)a0 textureOut:(id)a1;
- (void).cxx_destruct;

@end
