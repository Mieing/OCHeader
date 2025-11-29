@class UIImageView, UILabel, UIView;

@interface MMLiveHeatAndIconButton : MMUIButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *heatLabel;
@property (retain, nonatomic) UIView *lineView;

- (void)updateWithHeatText:(id)a0 icon:(id)a1;
- (void).cxx_destruct;

@end
