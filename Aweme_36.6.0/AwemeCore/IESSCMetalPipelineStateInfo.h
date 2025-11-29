@class MTLRenderPipelineReflection;
@protocol MTLRenderPipelineState;

@interface IESSCMetalPipelineStateInfo : NSObject

@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) MTLRenderPipelineReflection *reflection;

- (void).cxx_destruct;

@end
