@class NSString, NSDictionary, NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESEffectPlatformRequestManager : NSObject <EffectPlatformRequestDelegate>

@property (retain) NSDictionary *preFetchHeaderFields;
@property (retain) NSPointerArray *preFetchCompletionPointers;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long requestOptimizeAbKey;
@property (nonatomic) double requestTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestManager;

- (void)downloadFileByRequestBinaryWithPath:(id)a0 parameters:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (void)downloadFileWithURLString:(id)a0 downloadParameters:(id)a1 downloadPath:(id)a2 downloadProgress:(id *)a3 completion:(id /* block */)a4;
- (void)downloadFileWithURLString:(id)a0 downloadPath:(id)a1 downloadProgress:(id *)a2 completion:(id /* block */)a3;
- (id)downloadFileWithPath:(id)a0 urlList:(id)a1 downloadParameters:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)pauseTaskWithKey:(id)a0;
- (void)cancelTaskWithKey:(id)a0;
- (void)resumeTaskWithKey:(id)a0 filePath:(id)a1 urlList:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)isPreFetchCompletionWithCompletionObject:(id)a0;
- (void)checkDownloadFileParentDirectoryWithPath:(id)a0;
- (BOOL)isNetworkUnreachable;
- (void)requestWithURLString:(id)a0 parameters:(id)a1 headerFields:(id)a2 httpMethod:(id)a3 completion:(id /* block */)a4;
- (id)makeTTDownloadParametersWithParams:(id)a0 filePath:(id)a1;
- (id)downloadKeyWithPath:(id)a0;
- (void)handleResultNotification:(id)a0 withCompletion:(id /* block */)a1 extraInfo:(id)a2;
- (void)setPreFetchHeaderFieldsWithDictionary:(id)a0;
- (void)addPreFetchCompletionObject:(id)a0;
- (void)clearPreFetchInfos;
- (BOOL)shouldTaskBePausedWithTaskKey:(id)a0 thresholdSize:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
