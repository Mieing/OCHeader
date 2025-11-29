@class YYLabel, IESLLGradientView, UIImageView;

@interface IESLLDitoPOIMallRankLabel : UIView

@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) IESLLGradientView *iconGradientView;
@property (retain, nonatomic) UIImageView *iconView;

- (void)configWithRankString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (double)componentWidth;

@end
