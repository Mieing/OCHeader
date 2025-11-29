@interface FlowKit.FlowInputLongPressGestureDispatcher : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ longPressItem;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftButtonlongPressGesture;
    void /* unknown type, empty encoding */ _settingsProvider;
}

@property (nonatomic, readonly) BOOL lookin_shouldCaptureImage;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)handleLongPressGesture:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
