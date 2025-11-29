@interface AWEClassroomImpl.ClassroomHomeworkMediaCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ mediaModel;
    void /* unknown type, empty encoding */ uploadStatusHandler;
    void /* unknown type, empty encoding */ deleteBlock;
    void /* unknown type, empty encoding */ retryBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_durationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
}

- (void)retryAction;
- (void)deleteAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
