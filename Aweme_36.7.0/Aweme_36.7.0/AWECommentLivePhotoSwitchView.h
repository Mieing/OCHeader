@class UIImageView, UILabel;

@interface AWECommentLivePhotoSwitchView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL switchIsOn;
@property (copy, nonatomic) id /* block */ handler;

- (void)updateSwitchIsOn:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isOn:(BOOL)a1;
- (void)updateSwitchState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleTap;

@end
