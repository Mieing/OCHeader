@interface TTAccountNetworkManager : NSObject

+ (id)requestForJSONWithURL:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4;
+ (id)getRequestForJSONAndResponseWithURL:(id)a0 params:(id)a1 extraGetParams:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4;
+ (id)postRequestForJSONAndResponseWithURL:(id)a0 params:(id)a1 extraGetParams:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4;
+ (id)requestForJSONWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 needCommonParams:(BOOL)a4 follow302Redirect:(BOOL)a5 needDispatch:(BOOL)a6 headerField:(id)a7 needHandlePictureVerify:(BOOL)a8 callback:(id /* block */)a9;
+ (id)postRequestForJSONWithURL:(id)a0 params:(id)a1 extraGetParams:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4;
+ (id)getRequestForJSONWithURL:(id)a0 params:(id)a1 extraGetParams:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4;
+ (id)requestForJSONWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 needCommonParams:(BOOL)a4 follow302Redirect:(BOOL)a5 callback:(id /* block */)a6;
+ (id)uploadWithURL:(id)a0 parameters:(id)a1 constructingBodyWithBlock:(id /* block */)a2 progress:(id *)a3 needcommonParams:(BOOL)a4 callback:(id /* block */)a5;
+ (id)getRequestForJSONWithURL:(id)a0 params:(id)a1 needCommonParams:(BOOL)a2 callback:(id /* block */)a3;
+ (id)requestNoDispatchForJSONWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 needCommonParams:(BOOL)a4 callback:(id /* block */)a5;
+ (id)postRequestForJSONWithURL:(id)a0 params:(id)a1 needCommonParams:(BOOL)a2 callback:(id /* block */)a3;
+ (id)getRequestForJSONWithURL:(id)a0 params:(id)a1 callback:(id /* block */)a2;
+ (BOOL)needSwitchToCelluarWithURLString:(id)a0 params:(id)a1;
+ (BOOL)useIpv4DomainWithParams:(id)a0;
+ (id)requestForJSONWithURL:(id)a0 params:(id)a1 extraGetParams:(id)a2 method:(id)a3 needCommonParams:(BOOL)a4 callback:(id /* block */)a5;
+ (id)requestForJSONWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 needCommonParams:(BOOL)a4 follow302Redirect:(BOOL)a5 needDispatch:(BOOL)a6 headerField:(id)a7 needHandlePictureVerify:(BOOL)a8 callback:(id /* block */)a9 callbackInMainThread:(BOOL)a10;
+ (id)requestForJSONWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 needCommonParams:(BOOL)a4 follow302Redirect:(BOOL)a5 needDispatch:(BOOL)a6 callback:(id /* block */)a7;
+ (id)p_requestForJSONWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 needCommonParams:(BOOL)a4 follow302Redirect:(BOOL)a5 needDispatch:(BOOL)a6 headerField:(id)a7 needHandlePictureVerify:(BOOL)a8 callback:(id /* block */)a9 callbackInMainThread:(BOOL)a10;
+ (void)checkCommonParamsIfNeeded:(id)a0;
+ (id)tryHandleRequestCellularResult:(id)a0 params:(id)a1;
+ (void)trackEventPassportRequestNotUseAccountSDKIfNeeded:(id)a0;
+ (void)trackPassportNetRequestResult:(id)a0 jsonObj:(id)a1 error:(id)a2 startTimeStamp:(double)a3 start1970TimeStamp:(double)a4;
+ (void)trackIpMatchResultIfNeed:(id)a0 params:(id)a1;
+ (void)showCellularLogInfoWithResponse:(id)a0;
+ (void)retryLastRequest;
+ (void)handleTuringErrorWithError:(id)a0 jsonObj:(id)a1 completion:(id /* block */)a2;
+ (void)handleResponseJsonIfUserLogin:(id)a0 response:(id)a1;
+ (void)checkDeviceIdWithRetryTimes:(long long)a0 completion:(id /* block */)a1;
+ (void)checkInstallIdWithRetryTimes:(long long)a0 completion:(id /* block */)a1;
+ (void)trackHeaderTokenAndSetCookie:(id)a0 response:(id)a1;
+ (void)trackCSRFTokenErrorIfNeeded:(id)a0 response:(id)a1;
+ (void)trackXTTTokenErrorIfNeeded:(id)a0 response:(id)a1;
+ (void)trackHttpReuqestWithLoginTokenIfNeeded:(id)a0;
+ (id)postRequestForJSONAndResponseWithURL:(id)a0 params:(id)a1 extraGetParams:(id)a2 needCommonParams:(BOOL)a3 callback:(id /* block */)a4 callbackInMainThread:(BOOL)a5;
+ (id)requestModel:(id)a0 callback:(id /* block */)a1;
+ (void)addPassportNetRequestFilter;

@end
