@class NSString, WAAppActionSheet, NSMutableArray;
@protocol WASessionContentLogicHandlerDelegate;

@interface WASessionContentLogicHandler : NSObject <PBMessageObserverDelegate, WCActionSheetDelegate, WAAppActionSheetDelegate> {
    BOOL _isRequestedEnterSession;
    WAAppActionSheet *_actionSheet;
    NSMutableArray *_scanQrCodeBlackList;
}

@property (weak, nonatomic) id<WASessionContentLogicHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)requestEnterSessionCGIWithSessionFrom:(id)a0 enterScene:(unsigned long long)a1 extInfo:(id)a2 fromScene:(unsigned long long)a3;
- (void)showRightBtnActionSheetWithShowHomePage:(BOOL)a0;
- (void)dismissRightBtnActionSheet;
- (id)menubuttonTitleArray;
- (void)onClickWeAppReceiveSessionMsg;
- (void)fetchKFSessionInfo;
- (id)getScanQrCodeBlackList;
- (void)onResponseEnterSession:(id)a0;
- (void)onResponseFetchKFSessionInfo:(id)a0;
- (id)getContact;
- (id)getNavigationController;
- (id)getSessionContentViewController;
- (unsigned long long)getEnterScene;
- (id)getPageID;
- (id)getSceneID;
- (unsigned long long)getDebugMode;
- (unsigned int)getAppVersion;
- (id)getFatherAppid;
- (id)getFromPagePath;
- (void)confirmBlockMsgActionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)confirmReceiveMsgActionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)openWeAppAboutUs;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onRightBtnActionSheetClickBlockSessionMessage;
- (void)onRightBtnActionSheetClickReceiveSessionMessage;
- (void)onRightBtnActionSheetClickExpose;
- (void)onRightBtnActionSheetClickCancel;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)a0;
- (void)onWAActionSheetInfoClicked;
- (void).cxx_destruct;

@end
