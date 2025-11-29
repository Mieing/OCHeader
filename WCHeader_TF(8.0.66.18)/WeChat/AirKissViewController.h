@class NSData, MMTableViewInfo, NSString, UIView, NSDate, UIImageView, MMUIScrollView, WCDevice, UITextField, UIButton, MMUILabel, UILabel;
@protocol AirKissViewControllerDelegate;

@interface AirKissViewController : MMUIViewController <ILocationMgrExt, UITextFieldDelegate, INetworkStatusMgrExt, IWCDeviceAirKissMgrExt> {
    UIImageView *m_imageView;
    MMUILabel *m_ssidView;
    MMTableViewInfo *m_tableView;
    UITextField *m_ssidTextField;
    UITextField *m_password;
    UILabel *m_lengthErrLabel;
    UIButton *m_connectButton;
    UIView *m_noWifiOrBLEView;
    BOOL m_hasStart;
    NSDate *m_startDate;
}

@property (retain, nonatomic) MMUIScrollView *m_scrollView;
@property (copy, nonatomic) NSString *m_ssid;
@property (nonatomic) BOOL m_isStarted;
@property (nonatomic) BOOL m_isSsidExist;
@property (nonatomic) BOOL isInAlert;
@property (weak, nonatomic) id<AirKissViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSData *m_key;
@property (nonatomic) int m_procint;
@property (nonatomic) int m_dataint;
@property (nonatomic) BOOL m_isContinueToSearch;
@property (weak, nonatomic) WCDevice *m_targetDeviceInfo;
@property (nonatomic) unsigned long long m_source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)getSSIDAndReloadView;
- (void)doAlertForNotAuthoriziedStateInIOS13AndReloadView;
- (void)doGetSSIDWifiInfoAndReloadView;
- (void)initView;
- (void)makeSsidCell:(id)a0;
- (void)makePasswordCell:(id)a0;
- (void)initNoWifiView;
- (void)infoBtnClicked;
- (id)dismissWithAnimate:(BOOL)a0;
- (void)onCancel;
- (void)onSuccess;
- (void)onReturn:(BOOL)a0;
- (void)onConnect;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)onTextFieldLengthChange:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)onTap;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onAirKissEnd:(BOOL)a0;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)a0;
- (void).cxx_destruct;

@end
