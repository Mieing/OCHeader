@class AWEStudioCaptionEmbeddingDataManager, NSArray, AWEStudioCaptionEmbeddingUploader, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEStudioAIMemoriesUploadService : NSObject

@property (nonatomic) unsigned long long uploadStatus;
@property (retain, nonatomic) AWEStudioCaptionEmbeddingUploader *uploader;
@property (retain, nonatomic) AWEStudioCaptionEmbeddingDataManager *dataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prepareQueue;
@property (nonatomic) unsigned long long prepareStatus;
@property (retain, nonatomic) NSMutableArray *p_prepareC1500DataCompletionArray;
@property (copy, nonatomic) NSArray *C1500DataArray;

- (void)prepareC1500DataWithCompletion:(id /* block */)a0;
- (void)uploadC1500FeatureWithCountLimit:(long long)a0 completion:(id /* block */)a1;
- (void)uploadAssetLocationFeatureArray:(id)a0 completion:(id /* block */)a1;
- (void)reportDeletedAsset;
- (void)cancelEmbUploading;
- (void)uploadC1500FeatureWithAssetFeatureArray:(id)a0 completion:(id /* block */)a1;
- (void)originalUploadC1500FeatureWithCountLimit:(long long)a0 startTime:(double)a1 completion:(id /* block */)a2;
- (void)uploadFeaturesArray:(id)a0 batchSize:(long long)a1 completion:(id /* block */)a2;
- (void)uploadAssetLocationFeatureArray:(id)a0 batchSize:(long long)a1 completion:(id /* block */)a2;
- (void)invalidePreparedC1500Data;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;

@end
