@class SwitchBlockList, NSString, MMTableViewInfo, UILabel, WXGameGetUserSwitchCGI, WXGameSetUserSwitchCGI;

@interface WXGamePushSettingViewController : MMUIViewController <WXGameGetUserSwitchCGIDelegate, WXGameSetUserSwitchCGIDelegate> {
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) WXGameGetUserSwitchCGI *getUserSwitchCGI;
@property (retain, nonatomic) WXGameSetUserSwitchCGI *setUserSwitchCGI;
@property (retain, nonatomic) SwitchBlockList *userSwitchBlockList;
@property (retain, nonatomic) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)initTable;
- (void)showError;
- (void)getUserSwitchInfo;
- (void)handleSetSwitched:(id)a0 cellInfo:(id)a1;
- (void)getUserSwitchCGI:(id)a0 didGetResponse:(id)a1;
- (void)getUserSwitchCGI:(id)a0 didFailWithError:(id)a1;
- (void)setUserSwitchCGI:(id)a0 didGetResponse:(id)a1;
- (void)setUserSwitchCGI:(id)a0 didFailWithError:(id)a1;
- (double)labelHeight:(id)a0 maxWidth:(double)a1 font:(id)a2;
- (void).cxx_destruct;

@end
