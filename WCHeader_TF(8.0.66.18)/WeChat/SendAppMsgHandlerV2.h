@class CMessageWrap, NSString, WAContactGetter, NSArray, WXMediaInternalMessage, NSMutableDictionary, MMUINavigationController, OpenApiAppMsgGenerator, MMTipsViewController, CContact, OpenApiParameter, ForwardMessageLogicController;
@protocol SendAppMsgHandleDelegate;

@interface SendAppMsgHandlerV2 : MMObject <SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate> {
    OpenApiParameter *m_parameter;
    CMessageWrap *m_messageWrap;
    CContact *m_oContact;
    MMTipsViewController *_tipsViewController;
    BOOL m_bIsHiddenTarBar;
    NSString *m_nsRedirectUrl;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned int m_uiSessionSelectConfirmType;
}

@property (retain, nonatomic) WXMediaInternalMessage *mediaMessage;
@property (retain, nonatomic) WAContactGetter *contactGetter;
@property (nonatomic) unsigned int appbrandVersion;
@property (retain, nonatomic) NSString *appbrandDisplayName;
@property (retain, nonatomic) NSString *appbrandIconUrl;
@property (retain, nonatomic) NSMutableDictionary *shareKeyInfo;
@property (retain, nonatomic) NSString *appbrandAppId;
@property (nonatomic) BOOL appBrandWithShareTicket;
@property (nonatomic) BOOL canReturnRightShareResult;
@property (retain, nonatomic) NSArray *toContacts;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (retain, nonatomic) NSString *musicDataCDNMsgID;
@property (retain, nonatomic) OpenApiAppMsgGenerator *appMsgGenerator;
@property (retain, nonatomic) MMUINavigationController *m_navigationController;
@property (weak, nonatomic) id<SendAppMsgHandleDelegate> m_delegate;
@property (nonatomic) int m_Scene;
@property (nonatomic) BOOL m_bIsFromSysCopy;
@property (nonatomic) BOOL m_bIsSendSpecifiedContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportShareAppMsgInSessionMsgArr:(id)a0 contacts:(id)a1;
+ (void)reportShareMsg:(id)a0 contacts:(id)a1 openSDKVersion:(id)a2 shareSource:(unsigned long long)a3;

- (id)init;
- (void)dealloc;
- (void)sendAppMsgWithOpenApiParameter:(id)a0;
- (void)showUnsupportedAlert;
- (void)sendRespAndReportToApp:(id)a0 universalLink:(id)a1 errCode:(int)a2 errStr:(id)a3;
- (void)sendAppMsg:(id)a0 searchScene:(unsigned long long)a1 animated:(BOOL)a2;
- (void)sendAppMsg:(id)a0 searchScene:(unsigned long long)a1;
- (void)sendAppMsg:(id)a0;
- (void)cancelSendAppMsg;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)cancelAllHandleAndReturn3rdAppUnsupport;
- (void)clearAllHandleAndReturn3rdApp:(BOOL)a0;
- (void)sendRespToAppWithErrCode:(int)a0;
- (void)asyncNotifySendAppMsgOk;
- (void)showAlertView;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)doAppAuth;
- (void)shareAuthViewControllerDidCancel:(id)a0;
- (void)shareAuthViewControllerDidSuccess:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)handleShareAuthViewControllerDidSuccess:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)handleSuccessGenerateMsg:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)trySendAppMsg:(id)a0;
- (void)checkAppOpenId;
- (void)shareAuthViewControllerDidFail:(id)a0;
- (void)removeAuthViewController;
- (void)handleDecryptWxWorkChatRecordSuccess:(id)a0;
- (void)handleDecryptWxWorkChatRecordFail;
- (id)getCurrentViewController;
- (void)OnForwardMessageSelectSession:(id)a0;
- (void)OnForwardAppBrandMessageSend:(id)a0 appMsgItem:(id)a1;
- (void)OnForwardWeAppMessageSend:(id)a0 appMsgItem:(id)a1;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)OnForwardMessageBackToApp:(id)a0;
- (void)OnForwardMessageStayAtWeChat:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)reportShareResult:(int)a0;
- (void).cxx_destruct;

@end
