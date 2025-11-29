@class NSObject;
@protocol WCYoWindowDelegate;

@interface WCYoWindowContainer : MMUIWindow

@property (weak, nonatomic) NSObject<WCYoWindowDelegate> *yoWindowDelegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
