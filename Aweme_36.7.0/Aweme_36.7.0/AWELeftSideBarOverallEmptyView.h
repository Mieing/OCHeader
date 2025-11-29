@class DUXBaseLabel, DUXButton, DUXVacantView;

@interface AWELeftSideBarOverallEmptyView : UIView

@property (retain, nonatomic) DUXBaseLabel *loginLabel;
@property (retain, nonatomic) DUXButton *loginButton;
@property (retain, nonatomic) DUXVacantView *vacantView;
@property (nonatomic) BOOL hasTrack;

- (void)onLeftSideBarDidOpen;
- (void)onLeftSideBarDidClose;
- (void)themeStyleDidChange:(long long)a0;
- (void)p_resetUI;
- (void)p_loginAction;
- (void)p_initUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
