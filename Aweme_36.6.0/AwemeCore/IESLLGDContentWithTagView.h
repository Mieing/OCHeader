@class UILabel, IESLLGradientView, UIView;

@interface IESLLGDContentWithTagView : UIView

@property (retain, nonatomic) IESLLGradientView *dotView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *tagLabel;

- (void)configWithContentWithTagModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
