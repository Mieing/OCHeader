@class UIImageView;

@interface ACCOneClickFilmControlView : UIView

@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) BOOL isShowPause;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)onTapAction:(id)a0;
- (void)showPauseWithAnimated:(BOOL)a0;
- (void)hidePauseWithAnimated:(BOOL)a0;
- (void)updatePlayIcon:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
