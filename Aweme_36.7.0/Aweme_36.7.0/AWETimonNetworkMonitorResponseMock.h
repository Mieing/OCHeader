@class NSString, NSDictionary;

@interface AWETimonNetworkMonitorResponseMock : NSObject <TMNetworkAspectResponseProtocol>

@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSDictionary *passThroughInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tm_net_setResponseData:(id)a0;
- (void)tm_net_setResponseError:(id)a0;
- (id)tm_net_aspectType;
- (id)tm_net_url;
- (id)tm_net_allHTTPHeaderFields;
- (id)tm_net_valueForHTTPHeaderField:(id)a0;
- (id)tm_net_passThroughInfo;
- (void)tm_net_setPassThroughInfo:(id)a0;
- (id)tm_net_request;
- (long long)tm_net_statusCode;
- (id)tm_net_MIMEType;
- (id)tm_net_responseData;
- (id)tm_net_responseError;
- (void).cxx_destruct;
- (id)initWithMonitor:(id)a0;

@end
