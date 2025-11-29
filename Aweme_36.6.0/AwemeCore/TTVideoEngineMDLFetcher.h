@class TTVideoEngineInfoFetcher, NSString, NSArray, TTVideoEngineModel;
@protocol AVMDLiOSURLFetcherListener, TTVideoEngineMDLFetcherDelegate;

@interface TTVideoEngineMDLFetcher : NSObject <AVMDLiOSURLFetcherInterface, TTVideoInfoFetcherDelegate>

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *fileHash;
@property (copy, nonatomic) NSString *oldUrl;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) TTVideoEngineModel *videomodel;
@property (retain, nonatomic) TTVideoEngineInfoFetcher *infoFetcher;
@property (weak, nonatomic) id<AVMDLiOSURLFetcherListener> listener;
@property (weak, nonatomic) id<TTVideoEngineMDLFetcherDelegate> mdlFetcherDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMDLFetcherDelegate:(id)a0;
- (id)getMDLFetcherDelegate;
- (void)onError:(id)a0 callbackToMDL:(BOOL)a1;
- (id)getUrlsFromCache:(id)a0 fileHash:(id)a1 oldUrl:(id)a2;
- (void)onCompletion:(id)a0 isNewModel:(BOOL)a1;
- (id)getUrlsFromVideoModel:(id)a0 byFileHash:(id)a1;
- (BOOL)isNewUrlsValid:(id)a0 withOldUrl:(id)a1;
- (long long)start:(id)a0 fileKey:(id)a1 oldUrl:(id)a2 listener:(id)a3;
- (id)getURLs;
- (void)infoFetcherDidFinish:(long long)a0;
- (void)infoFetcherDidFinish:(id)a0 error:(id)a1;
- (void)infoFetcherShouldRetry:(id)a0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)a0;
- (void)close;
- (void).cxx_destruct;

@end
