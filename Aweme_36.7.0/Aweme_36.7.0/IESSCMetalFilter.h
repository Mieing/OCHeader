@class IESSCMetalRenderingDevice;

@interface IESSCMetalFilter : NSObject

@property (retain, nonatomic) IESSCMetalRenderingDevice *renderingDevice;

- (id)initWithRenderingDevice:(id)a0 blendEnable:(BOOL)a1;
- (void)renderWithParams:(id)a0;
- (void).cxx_destruct;

@end
