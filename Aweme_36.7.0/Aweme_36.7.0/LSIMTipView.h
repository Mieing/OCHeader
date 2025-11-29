@class UIImageView, YYLabel, LSIMButton;

@interface LSIMTipView : LSAdditionalView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) LSIMButton *closeButton;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ clickedBlock;

- (id)attributeContentWithModel:(id)a0;
- (void)closeTip;
- (double)contentLabelWidthWithClosable:(BOOL)a0;
- (void)highlightClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)closeButtonTapped;
- (void)updateModel:(id)a0;

@end
