@class DVETextStickerView, NSString;

@interface DVETextStickerContainView : UIView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) DVETextStickerView *selectTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGestures;
- (id)responseSubViewWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handlePinchGesture:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)handleRotationGesture:(id)a0;

@end
