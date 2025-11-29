@interface AWEPaySKMCodeRequest : CJPayBaseRequest

+ (id)createTaskCheckCodeValid:(id)a0 extraParams:(id)a1 extraQueryParams:(id)a2 completion:(id /* block */)a3;
+ (void)startCheckCodeValid:(id)a0 completion:(id /* block */)a1;
+ (id)buildUrl:(id)a0;
+ (void)startCreateCodeRequest:(id)a0 codeType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)startCheckCodeValid:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (id)buildWithParams:(id)a0 codeType:(unsigned long long)a1;
+ (id)getCodeTypeStr:(unsigned long long)a0;
+ (id)buildUrl:(id)a0 extraQueryParams:(id)a1;
+ (void)startRefreshCode:(id)a0 completion:(id /* block */)a1;

@end
