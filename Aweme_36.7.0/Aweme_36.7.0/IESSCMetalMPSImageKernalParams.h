@class IESSCMetalRenderOptions, MPSUnaryImageKernel;
@protocol MTLTexture;

@interface IESSCMetalMPSImageKernalParams : NSObject

@property (retain, nonatomic) id<MTLTexture> targetTexture;
@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (retain, nonatomic) MPSUnaryImageKernel *unaryImageKernel;
@property (retain, nonatomic) IESSCMetalRenderOptions *renderOptions;

- (id)initWithInputTexture:(id)a0 targetTexture:(id)a1 unaryImageKernal:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
