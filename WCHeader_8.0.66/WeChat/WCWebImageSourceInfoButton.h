@class MMWebImageView, UIImageView, UIView;

@interface WCWebImageSourceInfoButton : MMUIButton

@property (retain, nonatomic) UIView *roundBackView;
@property (retain, nonatomic) UIView *coverBackView;
@property (retain, nonatomic) MMWebImageView *iconImgView;
@property (retain, nonatomic) UIImageView *arrowImgView;

- (id)init;
- (void)initIconImgView;
- (void)initArrowView;
- (void)updateButtonContentWithImageURL:(id)a0 title:(id)a1 maxWidth:(double)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
