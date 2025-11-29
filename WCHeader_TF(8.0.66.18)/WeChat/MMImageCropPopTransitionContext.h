@class UIImageView;

@interface MMImageCropPopTransitionContext : NSObject

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageOriginFrameInWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFinalFrameInWindow;

- (void).cxx_destruct;

@end
