@class UIImageView, AWEHomePageBubbleSingleImageLabelContentConfig, UILabel, UIImage;

@interface AWEHomePageBubbleSingleImageLabelContentView : UIView

@property (retain, nonatomic) AWEHomePageBubbleSingleImageLabelContentConfig *config;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *placeHolder;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupWithConfig:(id)a0;
- (void)setBubbleImageSuccessWithLoadStartTimestamp:(long long)a0 loadSuccessTimestamp:(long long)a1 imageLoadFrom:(long long)a2;
- (void)setImageViewFromURLListWithCurrentTimestamp:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)updateUI;
- (void)updateImageView;

@end
