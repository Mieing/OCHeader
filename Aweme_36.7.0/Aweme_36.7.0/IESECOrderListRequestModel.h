@class IESECOrderListContext, IESECOrderHttpChunkRequest, NSString;

@interface IESECOrderListRequestModel : NSObject <YataNetConfigDelegate>

@property (retain, nonatomic) IESECOrderListContext *context;
@property (retain, nonatomic) IESECOrderHttpChunkRequest *chunkRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getLogIdWithResponse:(id)a0 andError:(id)a1;
+ (void)requestOrderListQueryDataWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestOrderListSchemeWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)p_netMetricsDictWithNetMetrics:(id)a0;

- (id)getUplinkConfigParamsWithTriggerType:(id)a0 node:(id)a1 eventFields:(id)a2;
- (void)cancelChunkRequestIfNeeded;
- (void)p_chunkRequestQueryWithScene:(long long)a0 completion:(id /* block */)a1;
- (void)p_requestWithScene:(long long)a0 params:(id)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3;
- (void)requestQueryWithScene:(long long)a0 completion:(id /* block */)a1 metricsBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
