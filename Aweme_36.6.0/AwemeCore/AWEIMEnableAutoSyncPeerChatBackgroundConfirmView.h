@class UILabel, UIButton;

@interface AWEIMEnableAutoSyncPeerChatBackgroundConfirmView : AWEIMBasePopupView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *enableAutoChangeBtn;
@property (copy, nonatomic) id /* block */ enableAutoChangedAction;
@property (copy, nonatomic) id /* block */ refuseAction;

- (void)p_createPopupView;
- (void)p_cancelBtnAction;
- (void)p_enableAutoChangeBtnAction;
- (void)showPopupViewIfNeeded;
- (void).cxx_destruct;

@end
