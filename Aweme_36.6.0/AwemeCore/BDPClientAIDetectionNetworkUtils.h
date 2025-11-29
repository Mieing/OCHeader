@interface BDPClientAIDetectionNetworkUtils : NSObject

+ (id)getAppVersion;
+ (void)fetchDetectionStrategyWithschema:(id)a0 appPageURL:(id)a1 pageHash:(id)a2 h5WebviewUrl:(id)a3 completion:(id /* block */)a4;
+ (id)getRequestDeviceInfo:(id)a0;
+ (id)getCommonRequestParamsWithSchema:(id)a0;
+ (void)excuteFetchRequestWithRequestURL:(id)a0 params:(id)a1 deviceInfoJsonString:(id)a2 completion:(id /* block */)a3;
+ (void)requestWordListFromRequestString:(id)a0 wordKey:(id)a1 completion:(id /* block */)a2;

@end
