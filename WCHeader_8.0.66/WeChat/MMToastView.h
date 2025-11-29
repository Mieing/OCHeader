@class SightIconView, UIView, UIImage, NSString, UIImageView, NSMutableAttributedString, MMUILabel, MMUIActivityIndicatorView;
@protocol MultiLineTextView;

@interface MMToastView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) SightIconView *sightIconView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSString *svgIconName;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableAttributedString *attributedString;
@property (retain, nonatomic) UIView<MultiLineTextView> *customView;
@property (nonatomic) float progress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateFrame;
- (void)updateLayout;
- (void)updateIcon;
- (id)contentColor;
- (double)maxWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (double)iconTextPadding;
- (struct CGSize { double x0; double x1; })iconSize;
- (void).cxx_destruct;

@end
