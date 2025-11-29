@class TTVideoEngineInfoFetcher, NSString, AWEScreenCastVideoInfo, TTVideoEngineModel;
@protocol AWEScreenCastProcessorDelegate;

@interface AWEScreenCastLVProcessor : NSObject <TTVideoInfoFetcherDelegate, AWEScreenCastProcessor>

@property (retain, nonatomic) TTVideoEngineInfoFetcher *infoFetcher;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ feedCompletion;
@property (copy, nonatomic) NSString *currentFetchID;
@property (retain, nonatomic) TTVideoEngineModel *engineModel;
@property (retain, nonatomic) AWEScreenCastVideoInfo *videoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEScreenCastProcessorDelegate> delegate;

- (void)infoFetcherDidFinish:(long long)a0;
- (void)infoFetcherDidFinish:(id)a0 error:(id)a1;
- (void)infoFetcherShouldRetry:(id)a0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)a0;
- (BOOL)canContinuePlay;
- (void)prefetchPlayItemWithModel:(id)a0;
- (void)fetchPlayItemWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (id)filterUnSupportedModelsWith:(id)a0;
- (id)v2VideoApiURL;
- (id)videoURLV2ApiWithPlayAuthToken:(id)a0;
- (BOOL)checkCanUseCurrentEngineModelWith:(id)a0;
- (id)makePlayInfoWithEngineModel:(id)a0 model:(id)a1;
- (id)makePlayItemWithPlayInfo:(id)a0 model:(id)a1;
- (void)fetchPlayItemViaTTWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchPlayItemViaAwemeWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchEngineModelWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)supportPreRedirect;
- (void)prefetchEngineModelWithModel:(id)a0;
- (void)fetchVideoInfoWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchWithPlayAuthToken:(id)a0;
- (id)makePlayInfoWithVideoInfo:(id)a0 model:(id)a1;
- (void).cxx_destruct;

@end
