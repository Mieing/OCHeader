@class UIImageView, UILabel;

@interface AWEMusicSteamingBGMusicPopupView : AWEMusicStreamingBasePopupView

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)setupLayouts;
- (void)showInView:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
