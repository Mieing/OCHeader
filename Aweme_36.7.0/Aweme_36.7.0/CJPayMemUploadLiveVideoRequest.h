@interface CJPayMemUploadLiveVideoRequest : CJPayBaseRequest

+ (id)p_secureRequestParams:(id)a0 context:(id)a1;
+ (void)startWithRequestparams:(id)a0 bizContentParams:(id)a1 context:(id)a2 noLoginParams:(id)a3 completion:(id /* block */)a4;
+ (id)apiPathWithIsNoLogin:(BOOL)a0;
+ (id)apiMethodWithIsNoLogin:(BOOL)a0;

@end
