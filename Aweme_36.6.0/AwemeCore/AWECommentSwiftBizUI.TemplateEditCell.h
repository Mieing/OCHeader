@interface AWECommentSwiftBizUI.TemplateEditCell : UICollectionViewCell <UIGestureRecognizerDelegate, NSObject> {
    void /* unknown type, empty encoding */ startEditing;
    void /* unknown type, empty encoding */ editStateDidChangeBlock;
    void /* unknown type, empty encoding */ cellWidthChangeBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_endEditingStateGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_endOtherEditingStateGestureRecognizer;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)innerEndEditingStateIfNeededWithGestureRecognizer:(id)a0;
- (void)innerEndOtherEditingStateWithGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
