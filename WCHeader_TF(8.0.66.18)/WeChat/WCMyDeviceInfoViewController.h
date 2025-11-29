@class NSString, WCDevice, WCMyDeviceInfoAssist;

@interface WCMyDeviceInfoViewController : MMUIViewController <WCMyDeviceInfoAssistDelegate, IWCDeviceBrandMgrExt, WCActionSheetDelegate, IStrangerContactMgrExt> {
    WCMyDeviceInfoAssist *m_oDeviceInfoAssist;
    id m_deviceData;
}

@property (retain, nonatomic) WCDevice *deviceInfo;
@property (nonatomic) unsigned long long m_source;
@property (nonatomic) BOOL m_ignoreContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initBindInfoWithContact:(id)a0 userData:(id)a1;
- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 userData:(id)a1;
- (void)initMyDeviceInfoAssist;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)getViewController;
- (void)onBindDevice;
- (void)onShowDeviceSession;
- (void)onUnbindDevice;
- (void)onRemarkEdited:(id)a0;
- (void)onEnterBrandSession;
- (void)onWCDeviceBindEnd:(id)a0 Error:(id)a1;
- (void)onWCDeviceUnbindEnd:(id)a0 Error:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onStrangerContactUpdated:(id)a0;
- (void)reloadView;
- (id)getDeviceStrangerContact;
- (void)jumpToContactInfoViewController:(id)a0;
- (void).cxx_destruct;

@end
