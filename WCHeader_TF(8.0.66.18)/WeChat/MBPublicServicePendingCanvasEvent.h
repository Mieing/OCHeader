@class UIView;

@interface MBPublicServicePendingCanvasEvent : NSObject

@property (retain, nonatomic) UIView *pendingView;
@property (nonatomic) BOOL pendingFirstFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pendingLayout;

- (void).cxx_destruct;

@end
