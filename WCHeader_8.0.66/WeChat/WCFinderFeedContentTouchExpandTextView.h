@interface WCFinderFeedContentTouchExpandTextView : WCFinderFeedContentTextView

@property (nonatomic) BOOL isLongPressHandled;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEstimatedPropertiesUpdated:(id)a0;
- (void)resetNormal;
- (void)onViewLongPressed;

@end
