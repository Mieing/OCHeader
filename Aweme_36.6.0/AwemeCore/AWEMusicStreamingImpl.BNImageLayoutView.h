@class UIColor, UIFont, NSString, UIImage, UIImageView;

@interface AWEMusicStreamingImpl.BNImageLayoutView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ textWidth;
}

@property (nonatomic) long long style;
@property (nonatomic) double imageTitleSpace;
@property (nonatomic) double verticalTitleOffset;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) BOOL isHiddenImage;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
