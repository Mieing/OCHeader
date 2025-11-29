@class NSString, NSDictionary;
@protocol LynxEventTarget;

@interface LynxEventTargetSpan : NSObject <LynxEventTarget> {
    long long _sign;
    int _ignoreFocus;
    BOOL _enableTouchPseudoPropagation;
    int _eventThrough;
    int _pointerEvents;
    NSDictionary *_dataset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    id<LynxEventTarget> _parent;
    NSDictionary *_eventSet;
    int _pseudoStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventSet;
- (BOOL)dispatchTouch:(id)a0 touches:(id)a1 withEvent:(id)a2;
- (BOOL)shouldHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isOnResponseChain;
- (id)parentTarget;
- (void)startEventCapture:(long long)a0;
- (void)startEventBubble:(long long)a0;
- (void)startEventFire:(BOOL)a0 withEventID:(long long)a1;
- (id)parentLynxPageUI;
- (id)childrenLynxPageUI;
- (id)rootLynxPageUI;
- (BOOL)consumeSlideEvent:(double)a0;
- (BOOL)ignoreFocus;
- (int)pointerEvents;
- (BOOL)enableTouchPseudoPropagation;
- (id)getDataset;
- (BOOL)eventThrough:(struct CGPoint { double x0; double x1; })a0;
- (int)pseudoStatus;
- (BOOL)blockNativeEvent:(id)a0;
- (void)onPseudoStatusFrom:(int)a0 changedTo:(int)a1;
- (void)onResponseChain;
- (void)offResponseChain;
- (long long)getGestureArenaMemberId;
- (void)setParentLynxPageUI:(id)a0;
- (void)setChildrenLynxPageUI:(id)a0;
- (void)onEventCapture:(BOOL)a0 withEventID:(long long)a1;
- (void)onEventBubble:(BOOL)a0 withEventID:(long long)a1;
- (void)onEventFire:(BOOL)a0 withEventID:(long long)a1;
- (id)initWithShadowNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setParentEventTarget:(id)a0;
- (BOOL)dispatchEvent:(id)a0;
- (long long)signature;
- (void)setEventID:(long long)a0;
- (void).cxx_destruct;
- (id)view;
- (id)parentResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)gestureMap;

@end
