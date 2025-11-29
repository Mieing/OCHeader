@class IESLiveAnchorSoundCardModel, UISwitch, UILabel, UIView;

@interface IESLiveAnchorSoundCardView : UIView

@property (retain, nonatomic) IESLiveAnchorSoundCardModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UISwitch *switchView;

- (void)updateUIWithModel:(id)a0;
- (void)switchViewValueDidChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
