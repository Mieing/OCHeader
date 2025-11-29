@class UIImageView, ACCAEVideoThumbClipViewModel, UIView;

@interface ACCAEVideoThumbClipView : UIView

@property (retain, nonatomic) UIView *durationView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *filterFlagImageView;
@property (retain, nonatomic) UIImageView *adjustFlagImageView;
@property (retain, nonatomic) ACCAEVideoThumbClipViewModel *viewModel;
@property (retain, nonatomic) UIView *selectedView;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) UIView *dimCoverView;

- (void)setupBindings;
- (void)loadCover;
- (void)setupSelectedView;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
