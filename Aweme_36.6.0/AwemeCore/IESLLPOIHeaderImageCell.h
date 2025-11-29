@class UIImageView, UIVisualEffectView;

@interface IESLLPOIHeaderImageCell : IESLLPOIHeaderBaseCell

@property (retain, nonatomic) UIImageView *cellImageView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIVisualEffectView *bgMaskView;

- (void)updateHeight:(double)a0 isMaxUnfold:(BOOL)a1 duration:(double)a2;
- (void)updateHeight:(double)a0 isMaxUnfold:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateData:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMask;
- (void)setupViews;

@end
