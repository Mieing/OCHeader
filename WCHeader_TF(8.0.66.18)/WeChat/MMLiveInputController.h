@interface MMLiveInputController : WCInputController <ClickStatSwizzleExt>

@property (nonatomic) double lastTouchEventTimestamp;

- (id)init;
- (void)initNotification;
- (void)dealloc;
- (void)setFKeyboardHeight:(double)a0;
- (void)liveInputKeyboardDidShow:(id)a0;
- (void)notifyInputViewHeightChanged;
- (void)onSendEvent:(id)a0;
- (void)onHitTextViewWithEvent:(id)a0;

@end
