@interface CRReportAPIClient : CRAPIClient

+ (id)client;
+ (id)clientWithSession:(id)a0;

- (void)reportPayload:(id)a0 onSuccess:(id /* block */)a1 onFailure:(id /* block */)a2;
- (id)innerData;
- (id)paramsGET:(id)a0;
- (id)getAMSSign:(id)a0;
- (id)handleBodyData:(id)a0;

@end
