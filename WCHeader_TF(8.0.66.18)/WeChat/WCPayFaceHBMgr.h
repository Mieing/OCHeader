@class NSString, WCPayFaceHBGetLogic, WCPayFaceHBPayLogic;

@interface WCPayFaceHBMgr : MMUserService <MMServiceProtocol, MMResourceMgrExt, IStrangerContactMgrExt, WCPayFaceHBPayLogicDelegate, WCPayFaceHBGetLogicDelegate> {
    WCPayFaceHBPayLogic *m_faceHBPayLogic;
    WCPayFaceHBGetLogic *m_faceHBGetLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)saveMount:(unsigned long long)a0 Count:(unsigned int)a1;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onResDeleteFinishWithResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (void)deleteResource;
- (void)checkResouce;
- (id)getRootPath;
- (id)getConfigPath;
- (id)getResourcePath;
- (id)getTmpPath;
- (id)dataForResource:(id)a0 ofType:(id)a1;
- (unsigned long long)getBigAmount;
- (void)startFaceHBPayLogic:(id)a0;
- (void)OnFaceHBPayLogicCancel;
- (void)startFaceHBGetLogic:(id)a0 withQRCode:(id)a1 withQRCodeHandle:(id)a2;
- (void)OnFaceHBGetLogicCancel;
- (id)getContactFromUserName:(id)a0;
- (void)mergeFaceHBReceiverInfo:(id)a0 withOldInfo:(id)a1;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void).cxx_destruct;

@end
