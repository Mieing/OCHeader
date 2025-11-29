@class NSNumber;
@protocol LynxEventTarget;

@interface EventTargetDetail : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } downPoint;
@property (nonatomic) struct CGPoint { double x; double y; } preTouchPoint;
@property (retain, nonatomic) NSNumber *identifier;
@property (weak, nonatomic) id<LynxEventTarget> ui;

- (id)initWithUI:(id)a0;
- (void).cxx_destruct;

@end
