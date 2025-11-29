@class UIStackView, AWEIMImageWaterFallGroupActionView, UILabel, UIButton;

@interface AWEIMImageWaterFallBottomView : UIView

@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UIButton *commitConfirmButton;
@property (retain, nonatomic) UILabel *commitConfirmTipLabel;
@property (retain, nonatomic) AWEIMImageWaterFallGroupActionView *groupActionView;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ groupAction;

- (void)updateButtonStatus:(BOOL)a0;
- (void)p_commit;
- (void)configWithTitle:(id)a0 tips:(id)a1 action:(id /* block */)a2 groupAction:(id /* block */)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
