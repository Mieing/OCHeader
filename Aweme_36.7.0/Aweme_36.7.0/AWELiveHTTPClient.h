@class NSString;

@interface AWELiveHTTPClient : NSObject <IESLiveHTTPClient>

@property (nonatomic) BOOL enableSyncCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestWithParamsModel:(id)a0;
- (id)handleError:(id)a0 withResponseObj:(id)a1;
- (id)requestIdForResponseObj:(id)a0;
- (id)logIDForResponseObj:(id)a0;
- (id)uploadFileData:(id)a0 URLString:(id)a1 progress:(id *)a2 parameters:(id)a3 completionHandler:(id /* block */)a4 fileType:(long long)a5;
- (id)dictionaryFromResponseHeader:(id)a0;
- (void)addNetWorkRequestFilter;
- (id)getLiveHTTPTask:(id)a0;
- (BOOL)p_isPollingMessageURL:(id)a0;
- (id)requestByChunkModelWithParamsModel:(id)a0;
- (id)p_postRawDataWithParamsModel:(id)a0;
- (id)synchronizedPOST:(id)a0 headerFields:(id)a1 parameters:(id)a2;
- (id)init;
- (id)baseURL;

@end
