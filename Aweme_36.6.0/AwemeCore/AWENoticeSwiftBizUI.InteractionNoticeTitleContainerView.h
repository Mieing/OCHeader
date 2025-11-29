@interface AWENoticeSwiftBizUI.InteractionNoticeTitleContainerView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relationTagLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imStatusLabel;
    void /* unknown type, empty encoding */ streakContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followButtonView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fansLabelView;
    void /* unknown type, empty encoding */ currentConfig;
    void /* unknown type, empty encoding */ followButtonClickBlock;
    void /* unknown type, empty encoding */ nameLabelTapBlock;
    void /* unknown type, empty encoding */ gestureShouldRequireFailureBlock;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)nameLabelTappedWithSender:(id)a0;
- (void)handleFollowButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
