@class HTSLiveApi;
@protocol IESLiveFullLinkMonitor, IESLiveMonitor;

@interface IESLiveCommonNetworkRequester : NSObject

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;

- (void)request:(id)a0 numToString:(BOOL)a1 callback:(id /* block */)a2;
- (void)p_postRequestWithModel:(id)a0 mapDict:(BOOL)a1 callback:(id /* block */)a2;
- (void)p_getRequestWithModel:(id)a0 mapDict:(BOOL)a1 callback:(id /* block */)a2;
- (void)reportStatusWithEventName:(id)a0 url:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4;
- (void)correctFetchResult:(id)a0 withError:(id)a1;
- (void)correctDouyinFetchResult:(id)a0 withError:(id)a1;
- (void).cxx_destruct;

@end
