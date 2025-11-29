@class NSArray, IESSCMetalImage, IESSCMetalRenderOptions, IESSCMetalRenderDrawOptions;
@protocol MTLRenderPipelineState;

@interface IESSCMetalRenderParams : NSObject

@property (retain, nonatomic) IESSCMetalImage *outputImage;
@property (retain, nonatomic) IESSCMetalRenderDrawOptions *renderDrawOptions;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) NSArray *vertexTextures;
@property (retain, nonatomic) NSArray *fragmentTextures;
@property (retain, nonatomic) NSArray *vertexBuffers;
@property (retain, nonatomic) NSArray *fragmentBuffers;
@property (retain, nonatomic) IESSCMetalRenderOptions *renderOptions;
@property (copy, nonatomic) id /* block */ renderPassDescriptorConfiguration;
@property (copy, nonatomic) id /* block */ renderEncoderConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
