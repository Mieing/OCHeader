@interface FlowMusic.SeekBarLegacy : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_thumbContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thumb;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentProcessBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentPlayableBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundBar;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ isSeeking;
    void /* unknown type, empty encoding */ seekTarget;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)handle:(id)a0;

@end
