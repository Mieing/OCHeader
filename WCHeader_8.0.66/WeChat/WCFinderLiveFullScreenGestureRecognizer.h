@protocol WCFinderLiveFullScreenGestureDelegate;

@interface WCFinderLiveFullScreenGestureRecognizer : WXFullScreenGestureRecognizer

@property (weak, nonatomic) id<WCFinderLiveFullScreenGestureDelegate> fullScreenGestureDelegate;

- (id)m_delegate;
- (void)LongPressEvents;
- (void)cancelPressEvents;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
