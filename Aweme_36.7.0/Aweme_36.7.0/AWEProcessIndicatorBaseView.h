@class UILabel, UIView;

@interface AWEProcessIndicatorBaseView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double contentMargin;
@property (retain, nonatomic) UIView *separatorView;

- (void)setLeftContent:(id)a0;
- (void)setRightContent:(id)a0;
- (void)setContentEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setLeftContentWithAttributeStr:(id)a0;
- (void)setRightContentWithAttributeStr:(id)a0;
- (void)setLeftContentFont:(id)a0;
- (void)setRightContentFont:(id)a0;
- (void)setLeftContentColor:(id)a0;
- (void)setRightContentColor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
