@class NSString, NSArray, NSDictionary;
@protocol LynxEventTarget;

@interface BDXLynxEventTargetSpan : NSObject <LynxEventTarget> {
    long long _sign;
    NSArray *_rects;
    BOOL _ignoreFocus;
    BOOL _enableTouchPseudoPropagation;
    id<LynxEventTarget> _parent;
    int _eventThrough;
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
- (BOOL)eventThrough;
- (void)startEventCapture:(long long)a0;
- (void)startEventBubble:(long long)a0;
- (void)startEventFire:(BOOL)a0 withEventID:(long long)a1;
- (id)parentLynxPageUI;
- (id)childrenLynxPageUI;
- (id)rootLynxPageUI;
- (BOOL)consumeSlideEvent:(double)a0;
- (BOOL)ignoreFocus;
- (BOOL)enableTouchPseudoPropagation;
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
- (void)setParentEventTarget:(id)a0;
- (id)initWithInfo:(id)a0 withRects:(id)a1;
- (id)targetRects;
- (BOOL)dispatchEvent:(id)a0;
- (long long)signature;
- (void)setEventID:(long long)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)gestureMap;

@end
