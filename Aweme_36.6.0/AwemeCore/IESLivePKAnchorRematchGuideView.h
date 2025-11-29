@class UIImageView;

@interface IESLivePKAnchorRematchGuideView : UIView

@property (nonatomic) BOOL isSigned;
@property (retain, nonatomic) UIImageView *checkBoxView;
@property (copy, nonatomic) id /* block */ guideActionBlock;

- (void)setupGuideView;
- (void)guideCancelBtnDidClick:(id)a0;
- (void)guideAutoMatchDidClick:(id)a0;
- (void)boxButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
