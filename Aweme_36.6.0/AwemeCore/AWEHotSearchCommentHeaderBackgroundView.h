@class AWEGradientView, DUXBaseImageView;

@interface AWEHotSearchCommentHeaderBackgroundView : UIView

@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) DUXBaseImageView *flameImage;

- (void)updateWithThemeType:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
