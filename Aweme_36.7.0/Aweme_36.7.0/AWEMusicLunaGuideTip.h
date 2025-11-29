@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEMusicLunaGuideTip : UIView

@property (retain, nonatomic) UIImageView *lunaImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *btn;
@property (retain, nonatomic) UIView *line;
@property (copy, nonatomic) id /* block */ tappedBlock;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtTitle;

- (void)p_tappedAction_IMP:(id)a0;
- (id)p_buildTitleLabel;
- (void)p_tappedAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
