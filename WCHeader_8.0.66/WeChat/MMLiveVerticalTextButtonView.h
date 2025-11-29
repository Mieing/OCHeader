@class MMLiveVerticalTextButtonViewConfig, UIButton, UILabel;

@interface MMLiveVerticalTextButtonView : UIView

@property (retain, nonatomic) MMLiveVerticalTextButtonViewConfig *config;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithConfig:(id)a0 actionBlock:(id /* block */)a1;
- (void)updateWithImage:(id)a0 title:(id)a1;
- (void)updateConfig:(id)a0;
- (void)initView;
- (void)layoutSubviews;
- (void)onTapInside:(id)a0;
- (void).cxx_destruct;

@end
