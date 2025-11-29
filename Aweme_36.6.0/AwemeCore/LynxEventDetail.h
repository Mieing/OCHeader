@class NSSet, LynxEvent, UIEvent, LynxView;
@protocol LynxEventTargetBase;

@interface LynxEventDetail : NSObject

@property (retain, nonatomic) LynxEvent *event;
@property (weak, nonatomic) id<LynxEventTargetBase> eventTarget;
@property (weak, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) UIEvent *uiEvent;
@property (retain, nonatomic) NSSet *touches;

- (BOOL)isMultiTouch;
- (id)initWithEvent:(id)a0 target:(id)a1 lynxView:(id)a2;
- (id)targetPointMap;
- (void).cxx_destruct;
- (id)params;
- (int)eventType;
- (id)eventName;
- (struct CGPoint { double x0; double x1; })targetPoint;

@end
