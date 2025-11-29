@class UIView;
@protocol IESIMGradientViewProtocol;

@interface AWEIMEmoticonCustomGiphyRecHeaderView : UICollectionReusableView

@property (weak, nonatomic) UIView<IESIMGradientViewProtocol> *lineViewLeft;
@property (weak, nonatomic) UIView<IESIMGradientViewProtocol> *lineViewRight;
@property (copy, nonatomic) id /* block */ didClickCloseBlock;

- (void)reconfigureUIIfNeededWithContext:(id)a0;
- (void)p_closeTapped;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
