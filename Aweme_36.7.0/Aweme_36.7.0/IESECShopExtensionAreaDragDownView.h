@class UILabel, LOTAnimationView, UIView;

@interface IESECShopExtensionAreaDragDownView : UIView

@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UILabel *dragDownTextLabel;
@property (retain, nonatomic) LOTAnimationView *dragDownIconLottieView;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UIView *backgroundView;

- (id)p_dragDownIconLottieFilePath;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(id)a0;
- (void)setupViews;

@end
