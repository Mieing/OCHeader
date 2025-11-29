@class UIGestureRecognizer;

@interface AWEHPChannelTopTabItemTapParams : NSObject

@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct CGPoint { double x; double y; } tapPoint;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;

- (void).cxx_destruct;

@end
