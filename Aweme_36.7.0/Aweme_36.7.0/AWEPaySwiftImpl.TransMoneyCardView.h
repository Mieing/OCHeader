@interface AWEPaySwiftImpl.TransMoneyCardView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconArea;
    void /* unknown type, empty encoding */ $__lazy_storage_$_icon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topFirstText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topSecondText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomHintText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
}

- (void)onCardTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
