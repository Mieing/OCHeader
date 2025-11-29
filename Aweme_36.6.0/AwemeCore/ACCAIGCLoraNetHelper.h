@protocol ACCAIGCResourceUploadProtocol;

@interface ACCAIGCLoraNetHelper : NSObject

@property (retain, nonatomic) id<ACCAIGCResourceUploadProtocol> aigcImageUploadService;

+ (void)cancelIndividualTasks:(id)a0 cancelGroupsContainingTasks:(id)a1 deleteSource:(long long)a2 completion:(id /* block */)a3;
+ (void)createLoraWithParam:(id)a0 result:(id /* block */)a1;
+ (void)deleteLoraWithParam:(id)a0 result:(id /* block */)a1;
+ (void)preloadUploadAuthorInfo:(id /* block */)a0;
+ (void)createLoraPortraitWithParam:(id)a0 result:(id /* block */)a1;
+ (void)deleteLoraListWithModeIds:(id)a0 param:(id)a1 result:(id /* block */)a2;
+ (void)updateDefaultLoraWithModeId:(id)a0 param:(id)a1 result:(id /* block */)a2;
+ (void)retryCreateLoraWithModeId:(id)a0 param:(id)a1 result:(id /* block */)a2;
+ (void)singleQueryLoraTaskWithParam:(id)a0 result:(id /* block */)a1;
+ (void)requestLoraRecommendKeywordToTalList:(id /* block */)a0;
+ (void)queryLoraInfoListWithParam:(id)a0 result:(id /* block */)a1;
+ (void)queryLoraInfoWithParam:(id)a0 result:(id /* block */)a1;

- (void)uploadImagesLocalPaths:(id)a0 extra:(id)a1 result:(id /* block */)a2;
- (void)cancelUploadImagesTask;
- (void)startUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (void).cxx_destruct;

@end
