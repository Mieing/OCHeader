@class LSIMBizCImageXUploadConfig, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LSIMImageUploader : NSObject

@property (retain, nonatomic) LSIMBizCImageXUploadConfig *config;
@property (retain, nonatomic) NSMutableArray *clients;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;

+ (id)cacheInstance;
+ (id)sharedManager;

- (void)eventManagerDidUpdate:(id)a0;
- (void)p_uploadWithContext:(id)a0 leftRetryCount:(long long)a1;
- (id)p_cropAndCompressImage:(id)a0;
- (BOOL)p_isAuthError:(id)a0;
- (void)p_resetConfig;
- (void)p_fetchConfigWithCompletion:(id /* block */)a0;
- (BOOL)p_checkConfigValid:(id)a0;
- (void)uploadImage:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
