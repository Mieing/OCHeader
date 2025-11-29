@class UIButton, HTSLiveGradientBackgroundView;

@interface IESLiveStreamClarityButtonView : UIView

@property (copy, nonatomic) id /* block */ onclickBlock;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *selectedGradientView;
@property (retain, nonatomic) UIButton *button;

+ (id)buildResolutionLevelButton:(id)a0 isFHD:(BOOL)a1 onclickBlock:(id /* block */)a2;
+ (id)buildPlaybackResolutionButtonViewWithSelected:(BOOL)a0 title:(id)a1 shouldShowHighResolutionTag:(BOOL)a2;

- (void)setDisable:(BOOL)a0;
- (void)setupUIWithTitle:(id)a0;
- (void)addTag:(unsigned long long)a0 toButtonIsLandscape:(BOOL)a1;
- (void)uploadDisplayTitle:(id)a0;
- (void)showSelectedGradientView:(BOOL)a0;
- (id)initWithFrameForFHD:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onclickBlock:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 onclickBlock:(id /* block */)a2;
- (void)addHighResolutionTagToButtonIsLandscape:(BOOL)a0;
- (void)setupWithFHD;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)a0;

@end
