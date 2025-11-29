@class ACCExtractCache, NSString, ACCCameraSubscription, NSMutableDictionary, NSMutableArray, NSObject, NPPresetRecommendService_OC;
@protocol OS_dispatch_queue;

@interface ACCExtractAbilityManager : NSObject

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *totalPath;
@property (retain, nonatomic) ACCExtractCache *cache;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NPPresetRecommendService_OC *featureService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *frameQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *packageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *featureQueue;
@property (retain, nonatomic) NSMutableDictionary *frameTasks;
@property (retain, nonatomic) NSMutableDictionary *packageTasks;
@property (retain, nonatomic) NSMutableDictionary *featureTasks;
@property (nonatomic) long long VETaskCount;
@property (retain, nonatomic) NSMutableArray *extractedMaterialIds;

- (void)startExtractFeature:(id)a0 completion:(id /* block */)a1;
- (id)resultForBizId:(id)a0 period:(unsigned long long)a1;
- (void)startExtractFrame:(id)a0 completion:(id /* block */)a1;
- (id)featureForMaterialId:(id)a0 requiredFeatures:(id)a1;
- (void)clearDiskCache:(id)a0;
- (id)initWithTaskId:(id)a0;
- (void)createTotalFolderIfNeeded;
- (id)createFrameTask:(id)a0;
- (void)updateResult:(id)a0 forBizId:(id)a1;
- (double)p_fromCacheRate:(id)a0;
- (id)createPackageTask:(id)a0;
- (id)createFeatureTask:(id)a0;
- (id)featureForMaterialId:(id)a0 requiredFeatures:(id)a1 timeStamps:(id)a2;
- (void)clearAllMaterialCache:(id)a0;
- (id)createBizFolderIfNeeded:(id)a0;
- (void)startExtractUpload:(id)a0 completion:(id /* block */)a1;
- (void)clearMemoryCache:(id)a0;
- (void)clearAllSourceCache:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
