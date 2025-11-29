@class NSString, NSArray, NSMutableDictionary, NSOperationQueue, NSDictionary, NSMutableArray, ACCExtractAbilityManager, ACCExtractResultModel;

@interface ACCFrameExtractManager : NSObject <ACCExtractEventSubscriber>

@property (retain, nonatomic) ACCExtractResultModel *resultModel;
@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *cachedResultModels;
@property (copy, nonatomic) NSArray *originalMaterialModels;
@property (copy, nonatomic) NSArray *inputOriginalMaterialModels;
@property (weak, nonatomic) ACCExtractAbilityManager *abilityManager;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *timeStamp;
@property (nonatomic) BOOL uploadFromCache;
@property (copy, nonatomic) NSString *uploadKey;
@property (copy, nonatomic) NSDictionary *extraUploadParams;
@property (nonatomic) BOOL skipUploadFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deepCopyWithOriginalMaterials:(id)a0;
+ (id)sharedInstance;

- (void)extractFrameDidFinished:(id)a0;
- (void)clearFrameExtractResultModel;
- (void)injectAbilityManager:(id)a0;
- (void)startFetchFrameAndUploadWithOriginalMaterialModels:(id)a0;
- (void)updateCreationId:(id)a0 timeStamp:(id)a1;
- (void)p_startFetchFrameAndUploadWithOriginalMaterialModels:(id)a0;
- (void)trackForTotalTimeCost:(double)a0;
- (void)didFinishFrameExtractWith:(id)a0;
- (void)p_extractPictureUploadWithFrameResult:(id)a0 materialsArrayType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)p_extractFeatureWithFrameResult:(id)a0 materialsArrayType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)p_extractPackageWithFrameResult:(id)a0 materialsArrayType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)p_extractBachWithFrameResult:(id)a0 materialsArrayType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)uploadFeatureResultIfNeeded:(id)a0;
- (void)updateUploadExtraParmas:(id)a0;
- (void)updateOriginalMaterialModels:(id)a0;
- (void)clearFrameExtractDir;
- (id)getCopiedInputOriginalMaterials;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
