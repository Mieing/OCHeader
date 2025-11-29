@class UIButton, UILabel, UIView;

@interface WCFinderInPictureContainerView : UIView

@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UILabel *tipsLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerView:(id)a1 targetVC:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pauseVideo;
- (void)updateTipsLabelWith:(id)a0 hidden:(BOOL)a1;
- (void).cxx_destruct;

@end
