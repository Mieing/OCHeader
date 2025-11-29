@interface WeChat.WCFinderSimpleProgressBar : UIView {
    void /* unknown type, empty encoding */ highlightBar;
    void /* unknown type, empty encoding */ value;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ config;

- (id)initWithConfig:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updateWithValue:(double)a0;
- (void)updateWithValue:(double)a0 animation:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
