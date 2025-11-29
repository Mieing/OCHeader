@class UITapGestureRecognizer, AWEIMHalfScreenMuteFilterSettingsCellViewModel;
@protocol AWEIMHalfScreenMuteSettingsCellDelegate;

@interface AWEIMNewHalfScreenMuteSettingsChangeFilterCollectionViewCell : AWEIMHalfScreenSettingsChangeFilterCollectionViewCell

@property (weak, nonatomic) id<AWEIMHalfScreenMuteSettingsCellDelegate> delegate;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) AWEIMHalfScreenMuteFilterSettingsCellViewModel *viewModel;

- (void)didClickCell;
- (void)configAccessibilityLabel;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
