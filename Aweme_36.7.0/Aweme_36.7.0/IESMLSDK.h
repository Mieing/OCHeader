@class NSString;

@interface IESMLSDK : NSObject <IESMLProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupWithURL:(id)a0 completion:(id /* block */)a1;
- (id)resourceStoragePath;
- (void)logWithLevel:(unsigned long long)a0 fileName:(id)a1 line:(long long)a2 func:(id)a3 log:(id)a4;
- (void)downloadTaskWithURL:(id)a0 destination:(id)a1 progress:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)prepareForSR;
- (void)setupWithLocalURL:(id)a0 completion:(id /* block */)a1;
- (void)clearAllCachedResource;
- (void)reportWithService:(unsigned long long)a0 params:(id)a1;
- (BOOL)setupLensWithURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1;

@end
