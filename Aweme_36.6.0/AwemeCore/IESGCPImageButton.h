@interface IESGCPImageButton : UIButton

@property (nonatomic) double imageTitleMargin;
@property (nonatomic) struct CGSize { double width; double height; } customImageSize;
@property (nonatomic) long long imagePosition;

- (BOOL)hasCustomImageSize;
- (void)layoutSubviewsVertically;
- (void)layoutSubviewsHorizontally;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
