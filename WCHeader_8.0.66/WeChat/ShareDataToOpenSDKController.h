@class CMessageWrap, NSString, UIView, WCDataItem, MMScrollActionSheet, NSArray, UIDocumentInteractionController, NSMutableArray, UIViewController, MsgToDeviceLogic, ShareTo3rdAppSettingViewController;
@protocol ShareDataToOpenSDKControllerDelegate;

@interface ShareDataToOpenSDKController : MMObject <IWCLanDeviceMsgForwardMgrExt, IShareTo3rdAppSettingViewControllerExt, UIDocumentInteractionControllerDelegate, MMScrollActionSheetDelegate, MsgToDeviceDelegate, ILinkDeviceExt, ThirdPartyServicePresentSheetViewDelegate> {
    MMScrollActionSheet *m_shareSheet;
    NSMutableArray *m_deviceSheetSection;
    NSMutableArray *m_3rdAppSection;
    UIViewController *fromViewController;
    CMessageWrap *m_oMessageWrap;
    WCDataItem *m_oDataItem;
    NSString *m_nsUsrName;
    NSString *_tmpFilePath;
    NSString *_tmpFileName;
    NSArray *m_arrLanDevices;
    UIDocumentInteractionController *m_vcDocument;
    ShareTo3rdAppSettingViewController *_appSettingVC;
}

@property (retain, nonatomic) MsgToDeviceLogic *ilinkDeviceLogic;
@property (weak, nonatomic) id<ShareDataToOpenSDKControllerDelegate> m_delegate;
@property (weak, nonatomic) UIView *m_viewToShow;
@property (nonatomic) long long m_opScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void)dealloc;
- (id)getCurrentVC;
- (id)make3rdAppSection;
- (BOOL)checkAvailablityOfMsg:(id)a0;
- (void)shareMsgToDevice:(id)a0;
- (void)shareMsgListToThirdPartyService:(id)a0 chatUsername:(id)a1 chatType:(unsigned long long)a2 sheetScene:(unsigned long long)a3 contentType:(unsigned int)a4;
- (void)realShowThirdPartyService:(id)a0 chatUsername:(id)a1 chatType:(unsigned long long)a2 sheetScene:(unsigned long long)a3 contentType:(unsigned int)a4;
- (void)onShareMsgToWeappFinished;
- (void)shareTimeLineToOpenSDKByDataItem:(id)a0 mediaItem:(id)a1;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetDidCancel:(id)a0;
- (BOOL)scrollActionSheetShouldCancel:(id)a0;
- (id)customViewForRow:(long long)a0;
- (id)customViewForItem:(id)a0;
- (BOOL)hasMessageTypeSupportOpenBySystem;
- (id)GetFilePath;
- (id)GetFilePath:(id)a0;
- (id)copyFileToTmpPathAndRetPath:(id)a0;
- (void)OnOpenByApp:(id)a0;
- (void)documentInteractionController:(id)a0 didEndSendingToApplication:(id)a1;
- (void)onShouldReloadView;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)a0;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)a0 toDevice:(id)a1;
- (void)onWCLanDeviceForwardMsgProgressUpdate:(double)a0 toDevice:(id)a1;
- (void)onILinkDeviceUpdate:(id)a0;
- (void)onMsgToDeviceSuccess:(id)a0;
- (void)onMsgToDeviceFail:(id)a0 type:(long long)a1;
- (void)onMsgToDeviceSending:(id)a0 progress:(double)a1;
- (id)itemForLanDevice:(id)a0;
- (id)actionSheetCellForLanDevice:(id)a0;
- (void)onActionSheetConfirmCancel;
- (void)reloadActionSheet;
- (void).cxx_destruct;

@end
