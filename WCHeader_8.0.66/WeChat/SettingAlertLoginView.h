@class NSString;

@interface SettingAlertLoginView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) NSString *tipString;
@property (retain, nonatomic) NSString *titleString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initForAlertMac;
- (id)initForAlertWin;
- (id)initForAlertLogin;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
