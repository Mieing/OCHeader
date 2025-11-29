@class UIImageView, UISwitch, UILabel, UIView, UIButton;
@protocol AWEIMHalfScreenMuteSettingsCollectionViewCellDelegate;

@interface AWEIMHalfScreenMuteSettingsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *editBtn;
@property (retain, nonatomic) UIImageView *selectedStateView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UISwitch *switchView;
@property (weak, nonatomic) id<AWEIMHalfScreenMuteSettingsCollectionViewCellDelegate> delegate;

- (void)didTapOnEditBtn;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
