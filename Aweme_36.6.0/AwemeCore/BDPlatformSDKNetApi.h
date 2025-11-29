@class NSString, BDPlatformSDKGetAuthReq, NSDictionary;

@interface BDPlatformSDKNetApi : NSObject

@property (copy, nonatomic) NSString *ticket;
@property (retain, nonatomic) BDPlatformSDKGetAuthReq *authReq;
@property (copy, nonatomic) NSDictionary *loginExtraInfo;

- (id)getConsumerScopeString;
- (void)dealNetworkResp:(id)a0 response:(id)a1 error:(id)a2 callback:(id /* block */)a3 type:(int)a4 authRespCallBack:(id /* block */)a5;
- (id)requestForJSONWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4;
- (id)getConsumerScopeArray;
- (void)trackerWithAuthLogType:(int)a0 logid:(id)a1 resultType:(unsigned long long)a2 errorCode:(long long)a3 errorDesc:(id)a4;
- (void)handleFilureWithData:(id)a0 error:(id)a1 callback:(id /* block */)a2;
- (id)errorDomainByType:(int)a0;
- (id)getConsumerScope;
- (id)fetchTicketWithParams:(id)a0 completion:(id /* block */)a1;
- (id)fetchAuthInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (id)fetchCustomAuthInfoWithURL:(id)a0 params:(id)a1 method:(id)a2 completion:(id /* block */)a3;
- (id)authorizeWithParams:(id)a0 isAuto:(BOOL)a1 completion:(id /* block */)a2;
- (id)fetchAuthInfoV2WithParams:(id)a0 completion:(id /* block */)a1;
- (id)fetchOpenAuthWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
