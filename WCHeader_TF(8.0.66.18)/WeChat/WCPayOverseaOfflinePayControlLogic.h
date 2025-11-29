@class NSString, WCPayOverseaGetOfflinePayUrlCgi;

@interface WCPayOverseaOfflinePayControlLogic : WCPayControlLogic <WCPayOverseaGetOfflinePayUrlCgiDelegate, MMWebViewDelegate, MMUseCaseCallback>

@property (retain, nonatomic) WCPayOverseaGetOfflinePayUrlCgi *getOfflinePayUrlCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseOK:(id)a0;
- (void)webViewDidReturn:(id)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
