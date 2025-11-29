@interface AWEIMElfBotMemoryNetworkUtils : NSObject

+ (BOOL)canContinueWithError:(id)a0 convID:(id)a1 convShortID:(id)a2;
+ (id)requestGenerateMemoryWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)requestDeleteMemoryWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)requestAggregationInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)requestSignArchiveWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)requestSyncMemoryWithData:(id)a0 completion:(id /* block */)a1;

@end
