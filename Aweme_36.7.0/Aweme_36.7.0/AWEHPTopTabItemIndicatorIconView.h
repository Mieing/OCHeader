@class AWEHPTopTabItemIndicatorIconUIModel, UIImageView;

@interface AWEHPTopTabItemIndicatorIconView : UIView

@property (retain, nonatomic) AWEHPTopTabItemIndicatorIconUIModel *uiModel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIImageView *unselectedImageView;

- (void)updateRotationWithAnimated:(BOOL)a0;
- (void)updateAlphaWithAnimated:(BOOL)a0;
- (void)updateUIModel:(id)a0;
- (void)updateSelectedProgress:(double)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTintColor:(id)a0;
- (void)setup;

@end
