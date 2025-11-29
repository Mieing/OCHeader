@class UILabel, IESLiveKTVSwitch, UIButton;

@interface IESLiveKTVOptimizeSettingPanelCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) IESLiveKTVSwitch *cellSwitch;
@property (retain, nonatomic) UIButton *cellButton;
@property (retain, nonatomic) UIButton *ruleButton;

- (void)renderWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
