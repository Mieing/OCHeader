@class ACCIntelligentMovieService;

@interface AWESelectTemplateDataProvider : NSObject

@property (retain, nonatomic) ACCIntelligentMovieService *movieService;
@property (nonatomic) BOOL hasTrackedAIUploadLoading;
@property (nonatomic) BOOL needReTryPreExtractionFailedCase;
@property (nonatomic, getter=isCanceled) BOOL canceled;

- (void)configMovieService:(id)a0;
- (void)assetsArray:(id)a0 publishModel:(id)a1 progress:(id /* block */)a2 downloadCompletion:(id /* block */)a3 completion:(id /* block */)a4;
- (id)p_extraParamsWithPublishModel:(id)a0;
- (void)p_handleTaskStep:(unsigned long long)a0 AndProgress:(float)a1 WithHandler:(id /* block */)a2;
- (void)templateModel:(id)a0 worksAssetArray:(id)a1 publishModel:(id)a2 needReplaceMusic:(BOOL)a3 progress:(id /* block */)a4 downloadCompletion:(id /* block */)a5 completion:(id /* block */)a6;
- (void)templateModel:(id)a0 assetsArray:(id)a1 publishModel:(id)a2 needReplaceMusic:(BOOL)a3 progress:(id /* block */)a4 downloadCompletion:(id /* block */)a5 completion:(id /* block */)a6;
- (void)assetsArray:(id)a0 publishModel:(id)a1 needReplaceMusic:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)templateModelTaskCancel;
- (void)reimportAssetsArrayIfNeed:(id)a0;
- (void)p_assembleSegInfos:(id)a0 withAssets:(id)a1;
- (void).cxx_destruct;

@end
