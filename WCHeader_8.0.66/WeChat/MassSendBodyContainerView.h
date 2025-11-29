@class NSSet;

@interface MassSendBodyContainerView : UIControl {
    id m_target;
    SEL m_action;
    NSSet *m_touches;
}

@property (nonatomic) BOOL shouldHighlightBackground;
@property (nonatomic) BOOL isLongPressHandled;
@property (copy, nonatomic) id /* block */ handleLongPress;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)LongPressEvents;
- (void).cxx_destruct;

@end
