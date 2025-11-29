@class UIImage, CALayer;

@interface WCFinderCoverAddTextResult : NSObject

@property (retain, nonatomic) UIImage *img;
@property (retain, nonatomic) CALayer *layer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (void).cxx_destruct;

@end
