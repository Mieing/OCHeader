@class UILabel, NSString, UIImageView;

@interface AWEMusicCardDialogPlaylistHeaderView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) UIImageView *icon;

+ (double)viewHeight;

- (void)adjustAndApplyTitle:(id)a0 defaultTitle:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 defaultTitle:(id)a2 subTitle:(id)a3 subtitleIcon:(id)a4;
- (void)setupSubview;
- (void).cxx_destruct;

@end
