@class NSString;

@interface TXCShaders : NSObject

@property (class, readonly) NSString *basicVertex;
@property (class, readonly) NSString *smoothHorizontalVertex;
@property (class, readonly) NSString *smoothVerticalVertex;
@property (class, readonly) NSString *twoInputVertex;
@property (class, readonly) NSString *basicFragment;
@property (class, readonly) NSString *swapRgbaFragment;
@property (class, readonly) NSString *nv12RenderFragment;
@property (class, readonly) NSString *i420RenderFragment;
@property (class, readonly) NSString *rgbRenderFragment;
@property (class, readonly) NSString *rgbPerspectiveRenderFragment;
@property (class, readonly) NSString *rgbSwapChannelsRenderFragment;
@property (class, readonly) NSString *rgbPerspectiveSwapChannelsRenderFragment;
@property (class, readonly) NSString *blendFragment;
@property (class, readonly) NSString *softBeautifyFragment;
@property (class, readonly) NSString *maskFragment;
@property (class, readonly) NSString *smoothHorizontalFragment;
@property (class, readonly) NSString *smoothVerticalFragment;
@property (class, readonly) NSString *smoothMixFragment;

@end
