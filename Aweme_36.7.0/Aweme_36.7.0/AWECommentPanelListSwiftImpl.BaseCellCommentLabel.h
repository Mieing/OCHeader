@interface AWECommentPanelListSwiftImpl.BaseCellCommentLabel : YYLabel {
    void /* unknown type, empty encoding */ touchBeganBlock;
    void /* unknown type, empty encoding */ touchCancelBlock;
    void /* unknown type, empty encoding */ touchBeganPoint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_predictFetchOptimize;
    void /* unknown type, empty encoding */ touchBeganTriggered;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
