@class UIImageView, UILabel;
@protocol CSJNativeExpressBannerOverseaDislikeViewDelegate;

@interface CSJNativeExpressBannerOverseaDislikeView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *closeLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL isSmallBanner;
@property (weak, nonatomic) id<CSJNativeExpressBannerOverseaDislikeViewDelegate> delegate;

- (void)gotoLogoWebViewVoid;
- (void)buildupView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
