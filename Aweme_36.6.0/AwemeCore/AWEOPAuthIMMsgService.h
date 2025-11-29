@interface AWEOPAuthIMMsgService : NSObject

+ (void)requestInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestWhenClickWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)buildRespDictWithCode:(long long)a0 errMsg:(id)a1 extraDict:(id)a2;

@end
