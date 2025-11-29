@class UIView, NSString, UISwitch, WCPaySetWalletEntranceBalanceSwitchStateCgi, UIImageView, WCPayLineSeparatorView, QueryWalletEntranceBalanceSwitchResp, WCPayQueryWalletEntranceBalanceSwitchStateCgi, UILabel;
@protocol WCPayWalletEntranceStateViewControllerDelegate;

@interface WCPayWalletEntranceStateViewController : WCPayBaseViewController <WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate, WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate>

@property (retain) WCPayQueryWalletEntranceBalanceSwitchStateCgi *m_getStateCgi;
@property (retain) WCPaySetWalletEntranceBalanceSwitchStateCgi *m_setStateCgi;
@property (retain) QueryWalletEntranceBalanceSwitchResp *m_getStateResponse;
@property (retain) UIView *m_headerView;
@property (retain) UIImageView *m_icon;
@property (retain) UILabel *m_titleLabel;
@property (retain) WCPayLineSeparatorView *m_panelView;
@property (retain) UISwitch *m_itemSwtich;
@property (weak) id<WCPayWalletEntranceStateViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasClickSwitch;
- (void)setHasClickSwitch:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)updateData;
- (void)updateView;
- (void)updateIcon;
- (void)updateTitleLabel;
- (void)updatePanelView;
- (void)onClickSwitch;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiResp:(id)a0;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiResp:(id)a0 fromServer:(BOOL)a1;
- (void).cxx_destruct;

@end
