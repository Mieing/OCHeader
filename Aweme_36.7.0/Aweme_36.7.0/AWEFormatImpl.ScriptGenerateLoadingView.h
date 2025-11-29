@interface AWEFormatImpl.ScriptGenerateLoadingView : UIView <DUXProgressViewProtocol> {
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ progressBarWidth;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressBarBottomView;
    void /* unknown type, empty encoding */ progressBarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_title;
}

- (double)getProgress;
- (void)updateProgress:(double)a0 inDuration:(double)a1;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateProgress:(double)a0;

@end
