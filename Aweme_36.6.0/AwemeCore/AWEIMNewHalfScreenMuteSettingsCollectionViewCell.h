@class UITapGestureRecognizer, UIView, AWEIMHalfScreenMuteSettingsCellViewModel;
@protocol AWEIMNewHalfScreenMuteSettingsCollectionViewCellDelegate;

@interface AWEIMNewHalfScreenMuteSettingsCollectionViewCell : AWEIMHalfScreenSettingsCollectionViewCell

@property (retain, nonatomic) AWEIMHalfScreenMuteSettingsCellViewModel *viewModel;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *accessView;
@property (weak, nonatomic) id<AWEIMNewHalfScreenMuteSettingsCollectionViewCellDelegate> switchDelegate;

- (void)didTapped;
- (void)didTapSwitch;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
