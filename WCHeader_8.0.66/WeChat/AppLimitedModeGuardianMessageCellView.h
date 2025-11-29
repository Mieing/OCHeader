@class UIImageView, UILabel, AppLimitedModeGuardianMessageViewModel;

@interface AppLimitedModeGuardianMessageCellView : CommonMessageCellView {
    UIImageView *m_thumbImageView;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
}

@property (readonly, nonatomic) AppLimitedModeGuardianMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDescLabel;
- (void)addThumbImageView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)updateThumbImage;
- (void).cxx_destruct;

@end
