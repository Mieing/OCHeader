@interface CJPayUploadIDPhotoRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParamsWithBizParams:(id)a0;
+ (id)p_secureRequestParams;
+ (void)startWithBizParams:(id)a0 useDeviceLanguage:(BOOL)a1 completion:(id /* block */)a2;

@end
