@class AWEHomePageBubbleRedIconLabelContentConfig, UIImageView, UILabel, UIImage;

@interface AWEHomePageBubbleRedIconLabelContentView : UIView

@property (retain, nonatomic) AWEHomePageBubbleRedIconLabelContentConfig *config;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *placeHolder;

- (void)setupWithConfig:(id)a0;
- (void)setBubbleImageSuccessWithLoadStartTimestamp:(long long)a0 loadSuccessTimestamp:(long long)a1 imageLoadFrom:(long long)a2;
- (void)setImageViewFromURLListWithCurrentTimestamp:(long long)a0;
- (double)getIconViewWidth;
- (void).cxx_destruct;
- (id)textFont;
- (id)initWithConfig:(id)a0;
- (id)textColor;
- (void)updateUI;
- (void)updateImageView;

@end
