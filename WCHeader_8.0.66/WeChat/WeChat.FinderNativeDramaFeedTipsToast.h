@interface WeChat.FinderNativeDramaFeedTipsToast : UIView {
    void /* unknown type, empty encoding */ countDownText;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ label;
}

@property (nonatomic) void /* unknown type, empty encoding */ content;

- (id)initWithCountDownText:(id)a0 onTap:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (void)updateCountDown:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
