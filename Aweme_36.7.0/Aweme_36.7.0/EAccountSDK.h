@interface EAccountSDK : NSObject

+ (id)getOperatorType;
+ (void)getServerTimeStampValue:(id)a0 appSecret:(id)a1;
+ (void)getMobileCodeWithTimeout:(double)a0 completion:(id /* block */)a1 failure:(id /* block */)a2;
+ (void)initWithSelfKey:(id)a0 appSecret:(id)a1;
+ (BOOL)isCellularDataEnable;
+ (void)mobileCode:(id)a0 appSecret:(id)a1 bussinessType:(id)a2 timeoutModel:(id)a3 block:(id /* block */)a4;
+ (void)preGetMobileRedirect:(id)a0 timeoutInterval:(double)a1 redirectReqId:(id)a2 redirectOrder:(id)a3 completion:(id /* block */)a4 failureHandler:(id /* block */)a5;
+ (void)printConsoleEnable:(BOOL)a0;
+ (void)processPreGetMobileRedirect:(id)a0 timeoutInterval:(double)a1 redirectReqId:(id)a2 completion:(id /* block */)a3 failureHandler:(id /* block */)a4;
+ (void)processTimeStamp:(id)a0 appKey:(id)a1 appSecret:(id)a2;
+ (void)requestPRELogin:(id)a0 completion:(id /* block */)a1 failure:(id /* block */)a2;
+ (void)requestPreLogin:(double)a0 completion:(id /* block */)a1 failure:(id /* block */)a2;
+ (void)requestWithBaseURL:(id)a0 params:(id)a1 httpMethod:(id)a2 bParamsEncrypto:(BOOL)a3 tag:(id)a4 appKey:(id)a5 appSecret:(id)a6 responsBlack:(id /* block */)a7;
+ (void)setAPIHost;
+ (void)startReportLog:(id)a0 costInterval:(double)a1;
+ (void)startUpload80012LogWithReqID:(id)a0;
+ (void)startReportLog:(id)a0;
+ (void)setDomainName:(id)a0;

@end
