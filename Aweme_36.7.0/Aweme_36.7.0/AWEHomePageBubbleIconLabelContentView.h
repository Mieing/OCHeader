@class UIImageView, UIImage, UILabel, AWEHomePageBubbleIconLabelContentConfig;

@interface AWEHomePageBubbleIconLabelContentView : UIView

@property (retain, nonatomic) AWEHomePageBubbleIconLabelContentConfig *config;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *placeHolder;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)updateUI;
- (void)updateImageView;

@end
