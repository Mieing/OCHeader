@class AWEIMHalfScreenMuteFilterSettingsCellViewModel, UIImageView, UILabel, UIView;

@interface AWEIMHalfScreenMuteSettingsChangeFilterCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedCheckMarkImageView;
@property (retain, nonatomic) UIImageView *unselectedCheckMarkImageView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEIMHalfScreenMuteFilterSettingsCellViewModel *viewModel;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
