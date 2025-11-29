@class NSString;

@interface AWEStudioExtFriendsImpl.SmartFadingLabel : UILabel {
    void /* unknown type, empty encoding */ gradientMask;
    void /* unknown type, empty encoding */ shouldShowGradient;
    void /* unknown type, empty encoding */ fadeStartPercentage;
    void /* unknown type, empty encoding */ fadeWidthPercentage;
}

@property (nonatomic, copy) NSString *text;

- (id)initWithFontSize:(double)a0 isBold:(BOOL)a1 textColor:(id)a2 text:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
