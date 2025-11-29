@protocol MTLDevice, MTLCommandBuffer;

@interface IESLiveOffscreenRenderCallbackModel : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (nonatomic) long long frame;

- (void).cxx_destruct;

@end
