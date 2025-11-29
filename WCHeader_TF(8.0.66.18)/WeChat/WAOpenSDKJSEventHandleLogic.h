@class NSArray, WAContactGetter, NSString, NSMutableArray;

@interface WAOpenSDKJSEventHandleLogic : NSObject <WAOpenSDKJSEventHandlerDelegate, PBMessageObserverDelegate, WAOpenSDKJSAPIContextAdapterDelegate, WAOpenSDKTransferAuthAdapterDelegate>

@property (retain, nonatomic) WAContactGetter *contactGetter;
@property (retain, nonatomic) NSMutableArray *jsapiEvents;
@property (retain, nonatomic) NSMutableArray *WAJSAPIEventsPool;
@property (retain, nonatomic) NSMutableArray *WAJSAPIAuthPool;
@property (retain, nonatomic) NSArray *needBusinessSelfCloseWebviewList;
@property (nonatomic) long long apiFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)convertNameToWAJSAPIClass:(id)a0;
+ (BOOL)_WAJSAPIMustRunInMainThread:(id)a0;
+ (long long)convertToQRCodeStateWithResultType:(long long)a0;
+ (BOOL)_WAJSEventParamsIsCancel:(id)a0 handlerClassString:(id)a1;

- (id)init;
- (void)initNeedBusinessSelfCloseWebviewList;
- (void)handleOpenSDKJSEventWithAppId:(id)a0 invokeData:(id)a1 transferScene:(unsigned long long)a2 invokeContext:(id)a3;
- (void)handleAuthAndRunJSEventWithAppId:(id)a0 invokeData:(id)a1 invokeContext:(id)a2;
- (BOOL)handleOpenSDKJSEventWithUserName:(id)a0 orAppId:(id)a1 invokeData:(id)a2 invokeContext:(id)a3;
- (Class)getJsapiClass:(id)a0;
- (void)handleEvent:(id)a0 argsDic:(id)a1 eventContext:(id)a2 jsapiType:(id)a3 transitiveData:(id)a4;
- (void)sendQRResult:(id)a0 qrState:(long long)a1 eventHandler:(id)a2;
- (void)sendQRResult:(id)a0 qrState:(long long)a1 transitiveData:(id)a2 context:(id)a3;
- (void)endWithResult:(id)a0 eventHandler:(id)a1;
- (void)endWithResult:(id)a0 eventHandler:(id)a1 transitiveData:(id)a2 context:(id)a3;
- (void)sendRespToOpenApiMgr:(id)a0;
- (void)executeQRCodeResult:(long long)a0 respData:(id)a1 invokeContext:(id)a2;
- (void)updateRuntimeQrcode:(unsigned int)a0 respData:(id)a1 invokeContext:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onWAOpenSDKJSAPIContextAdapter:(id)a0 endWithResult:(id)a1 handler:(id)a2;
- (void)handleOpenSDKWithTicketResult:(id)a0 eventContext:(id)a1;
- (void)onWAOpenSDKJSAPIContextAdapter:(id)a0 sendResultBeforeEnd:(id)a1 resultType:(long long)a2 handler:(id)a3;
- (void)onWAOpenSDKTransferAuthAdapterUserDidAccept:(id)a0;
- (void)onWAOpenSDKTransferAuthAdapterUserDidReject:(id)a0;
- (void)onWAOpenSDKTransferAuthAdapter:(id)a0 authDidFailWithErrMsg:(id)a1;
- (void)onWAOpenSDKTransferAuthAdapter:(id)a0 confirmAuthRequestDidComplete:(BOOL)a1;
- (id)containerVCForWAOpenSDKTransferAuthAdapter:(id)a0;
- (BOOL)needDelayPopSourceVcInQRCodeModeWithHandler:(id)a0;
- (void).cxx_destruct;

@end
