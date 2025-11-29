@class UIImageView, UIColor, UIView;

@interface AWEPOIVideoMuteView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *muteIcon;
@property (nonatomic) BOOL isMute;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) id /* block */ stateChange;

- (void)adjustLayout;
- (void)onClickAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
