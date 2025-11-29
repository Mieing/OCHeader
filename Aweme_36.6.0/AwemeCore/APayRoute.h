@class NSString, MQPWebService;

@interface APayRoute : NSObject <MQPWebServiceDelegate>

@property (copy, nonatomic) NSString *infoStr;
@property (copy, nonatomic) NSString *schemeStr;
@property (copy, nonatomic) NSString *unviersalLinkStr;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) MQPWebService *webService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webService:(id)a0 closeWithParams:(id)a1;
- (void)callWithInfo:(id)a0 scheme:(id)a1 unviersalLinkStr:(id)a2 config:(long long)a3 externInfo:(id)a4 result:(id /* block */)a5;
- (void)callAlipay;
- (void)callSafepay;
- (void)callAuth_v2;
- (void)callWithNativeScheme:(id)a0;
- (void)callWithWapUrl:(id)a0 andParams:(id)a1 needCheck:(BOOL)a2;
- (void)fetchWithScheme:(id)a0;
- (void)authWithInfo:(id)a0 ofType:(long long)a1 externInfo:(id)a2 result:(id /* block */)a3;
- (void)authByPortalWithInfo:(id)a0;
- (void)authByWapWithInfo:(id)a0 ofUrl:(id)a1;
- (void)webServiceAction:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
