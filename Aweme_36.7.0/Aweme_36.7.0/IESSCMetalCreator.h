@class IESSCMetalRenderingDevice;

@interface IESSCMetalCreator : NSObject

@property (retain, nonatomic) IESSCMetalRenderingDevice *renderingDevice;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (id)renderImage:(id)a0;
- (void).cxx_destruct;

@end
