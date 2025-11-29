@class UIImageView;

@interface IESECVideoMuteTagView : UIView

@property (retain, nonatomic) UIImageView *muteView;
@property (retain, nonatomic) UIImageView *audioView;
@property (nonatomic) BOOL mute;

- (void)updateMuteView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
