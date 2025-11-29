@class YYLabel, AWEGradientView, UIImageView;

@interface AWEDitoPOIMallRankLabel : UIView

@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) AWEGradientView *iconGradientView;
@property (retain, nonatomic) UIImageView *iconView;

- (void)configWithRankString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (double)componentWidth;

@end
