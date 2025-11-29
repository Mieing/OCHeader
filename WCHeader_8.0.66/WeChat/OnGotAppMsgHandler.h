@class NSString, AppCommunicateData, ShareMessageConfirmLogicHelper;
@protocol OnGotAppMsgHandleDelegate;

@interface OnGotAppMsgHandler : MMObject <ShareMessageConfirmLogicHelperDelegate, IPreEnterWechatLogicExt> {
    NSString *m_nsAppid;
    AppCommunicateData *m_appData;
    ShareMessageConfirmLogicHelper *_confirmHelper;
}

@property (weak, nonatomic) id<OnGotAppMsgHandleDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onGotAppMsg:(id)a0 withData:(id)a1;
- (void)cancelGotAppMsg;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)createConfirmView;
- (void)jumpToMessageContentViewAndConfirm;
- (void)removeConfirmView;
- (void)onPreEnterWechatDone;
- (void)OnSendMessageOK:(id)a0;
- (void)OnSendMessageCancel:(id)a0;
- (void).cxx_destruct;

@end
