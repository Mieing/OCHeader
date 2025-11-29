@class UIButton;

@interface AWEStudioComposerAlbumEditBottomBar : UIView

@property (readonly, nonatomic) UIButton *editButton;
@property (readonly, nonatomic) UIButton *originalPhotoButton;
@property (readonly, nonatomic) UIButton *nextButton;

- (void)updateWithTheme:(long long)a0;
- (void)configCornerRadius:(double)a0 forView:(id)a1;
- (void)setEditButtonVisible:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
