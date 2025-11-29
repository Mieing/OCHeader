@class UIImageView, UILabel, UIView;

@interface AWEIMImageBothIconTextWaterFallCell : AWEIMImageWaterFallCell

@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;

+ (id)identifier;

- (void)configWithItem:(id)a0;
- (void)p_setupSubUI;
- (void)p_updateSubUIWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
