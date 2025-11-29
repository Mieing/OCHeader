@interface CJPayQueryAnomalyRequest : NSObject

+ (void)startRequestWithUrl:(id)a0 method:(id)a1 requestParams:(id)a2 headerFields:(id)a3 serializeType:(unsigned long long)a4 callback:(id /* block */)a5;
+ (id)buildServerUrl;
+ (void)startWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)queryAnomalyRequestConfigHost;

@end
