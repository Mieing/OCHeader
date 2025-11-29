@class UISwitch, UILabel, MMWebImageView, AppRegisterInfo;
@protocol ShareTo3rdAppManageCellDelegate;

@interface ShareTo3rdAppManageCell : MMUIView {
    MMWebImageView *_iconImageView;
    UILabel *_nameLabel;
    UISwitch *_switchView;
    AppRegisterInfo *m_appInfo;
}

@property (weak, nonatomic) id<ShareTo3rdAppManageCellDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAppInfo:(id)a1;
- (void)layoutSubviews;
- (void)actionSwitchValueChanged:(id)a0;
- (void).cxx_destruct;

@end
