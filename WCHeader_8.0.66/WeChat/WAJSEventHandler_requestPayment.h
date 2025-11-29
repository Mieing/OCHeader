@class NSString, NSMutableDictionary, WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_requestPayment : WAJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate, IWCPayJSApiMgrExt, IWCPayPayMoneyLogicExt> {
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
}

@property (retain, nonatomic) NSMutableDictionary *dic;
@property (nonatomic) BOOL finallyUseCustomAppId;
@property (retain, nonatomic) NSString *customUsrName;
@property (retain, nonatomic) NSString *customPath;
@property (nonatomic) int requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)reportScanPosPay:(id)a0 action:(int)a1;
- (void)handleJSEventImpl:(id)a0 scene:(id)a1 amount:(id)a2;
- (id)getWCPayPayParam;
- (id)getTinyappUserName;
- (id)getTinyappPath;
- (id)getCustomAppIdFromDic:(id)a0;
- (void)onWCPayResultBeforeUserInteractionEnd:(id)a0;
- (void)onWCPayPayMoneySuccess:(id)a0;
- (void)onWCPayJSApiResult:(id)a0 needCloseWebview:(BOOL)a1;
- (void)onWCPayJSApiResult:(id)a0 needCloseWebview:(BOOL)a1 tinyappUsername:(id)a2 tinyappPath:(id)a3;
- (void)endWithResult:(id)a0;
- (void).cxx_destruct;

@end
