@class UIImageView, AWEHomePageBubbleDoubleImageLabelContentConfig, UILabel, UIImage;

@interface AWEHomePageBubbleDoubleImageLabelContentView : UIView

@property (retain, nonatomic) AWEHomePageBubbleDoubleImageLabelContentConfig *config;
@property (retain, nonatomic) UIImageView *firstImageView;
@property (retain, nonatomic) UIImageView *secondImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *firstPlaceHolder;
@property (retain, nonatomic) UIImage *secondPlaceHolder;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)updateUI;
- (void)updateImageView;

@end
