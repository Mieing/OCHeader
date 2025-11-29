@class NSString, NSDictionary, WADataPipePerformance, NSData, WAUserAuthorizeLogic, WAJSContextPlugin_userAccount;
@protocol IWATransferProxyImplProtocol;

@interface WAJSEventHandler_operateWXData : WAJSEventHandler_BaseEvent <WAAuthorizeDelegate, WAJSContextPlugin_userAccountProtocol> {
    NSData *_data;
    WAUserAuthorizeLogic *_authLogic;
    BOOL _requestInQueue;
}

@property (weak, nonatomic) WAJSContextPlugin_userAccount *userAccountInstance;
@property (retain, nonatomic) id<IWATransferProxyImplProtocol> transferBridge;
@property (copy) NSDictionary *jsapiParams;
@property (nonatomic) unsigned int cgiEventId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDictionary *dicInputParam;
@property (retain, nonatomic) WADataPipePerformance *performance;
@property (retain, nonatomic) NSString *appId;

- (void)mainThread_runUserAccountJSEvent:(id)a0;
- (void)onUserAccountJSEventEnd;
- (void)handleJSEvent:(id)a0;
- (void)endWithResult:(id)a0;
- (void)endErrorWithMessage:(id)a0;
- (void)endErrorWithMessage:(id)a0 code:(int)a1;
- (void)endErrorWithMessage:(id)a0 code:(int)a1 errNo:(unsigned int)a2;
- (void)endWithTimeout;
- (void)endOKWithData:(id)a0;
- (void)endCancel;
- (void)requestDataWithAppID:(id)a0 data:(id)a1 isImportant:(BOOL)a2 keepAlive:(BOOL)a3 useQuic:(BOOL)a4 needShowPrivacyProtectInfo:(BOOL)a5;
- (void)onResponseData:(id)a0;
- (void)requestConfirmWithAppID:(id)a0 data:(id)a1 scope:(id)a2 avatarId:(unsigned int)a3 sessionId:(id)a4 avatarOpt:(unsigned int)a5 acceptProtocol:(BOOL)a6;
- (void)onResponseConfirm:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)fillPerformace:(id)a0 fromCgiProfile:(id)a1;
- (void)fillClientInfo:(id)a0 fromPerformance:(id)a1;
- (void)continueShowConfirmView:(id)a0;
- (void)showConfirmView:(id)a0;
- (id)getCurrentViewController;
- (void)onAuthorizeConfirmAccept:(id)a0 resultInfo:(id)a1;
- (void)onAuthorizeConfirmDeny:(id)a0 resultInfo:(id)a1;
- (unsigned int)wxDataMaxDataSizeInBytes;
- (void).cxx_destruct;

@end
