@class YYLabel, AWEGradientView, UIImageView;

@interface AWEDitoPOIFavoriteRankLabel : UIView

@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) AWEGradientView *iconGradientView;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL shouldShowLargeMode;

- (void)configWithRankString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
