@class NSURL;
@protocol IESLiveHTTPClient, IESLiveIMByteLinkApiService;

@interface IESLiveTraceAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveHTTPClient> client;
@property (retain, nonatomic) NSURL *uploadURL;
@property (nonatomic) BOOL useByteLink;
@property (retain, nonatomic) id<IESLiveIMByteLinkApiService> bytelinkApi;

- (void)p_uploadTraceEventsByByteLink:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)p_uploadTraceEventsByHttp:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)uploadTraceEvents:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
