@class UIView;

@interface CSJRenderResultModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } adViewSize;
@property (nonatomic) BOOL haveVideoInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoFrame;
@property (nonatomic) struct { double topLeft; double topRight; double bottomLeft; double bottomRight; } videoCornerRadii;
@property (nonatomic) double maxRadius;
@property (weak, nonatomic) UIView *playerViewContainerView;

- (void).cxx_destruct;

@end
