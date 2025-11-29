@class NPPresetRecommendService_OC, NPGenericTemplateTrackHelper, NSString;
@protocol NPGenericTemplateRecommendConfigDelegate;

@interface NPGenericTemplateService_OC : NSObject <NPPresetRecommendExtractFrameConfigDelegate, NPPresetRecommendAlgorithmServiceDelegate> {
    struct shared_ptr<nle::preset::NPGenericTemplateService> { struct NPGenericTemplateService *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (retain, nonatomic) NPPresetRecommendService_OC *recommendService;
@property (retain, nonatomic) NPGenericTemplateTrackHelper *trackHelper;
@property (readonly, nonatomic) struct shared_ptr<nle::preset::NPGenericTemplateService> { struct NPGenericTemplateService *x0; struct __shared_weak_count *x1; } cppValue;
@property (weak, nonatomic) id<NPGenericTemplateRecommendConfigDelegate> recommendConfigDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCacheDirPath;
+ (void)clearCache:(unsigned long long)a0;
+ (void)setupInjectParams:(id)a0;
+ (BOOL)isMusicDynamicTemplate:(id)a0;
+ (BOOL)isSlotDurationDynamicTemplate:(id)a0;
+ (struct shared_ptr<nle::preset::NPGenericTemplateInfo> { struct NPGenericTemplateInfo *x0; struct __shared_weak_count *x1; })convertToCPPInfo:(id)a0;

- (BOOL)isTemplateReady:(id)a0;
- (long long)fetchGenericTemplate:(id)a0 priorityStrategy:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (float)getTemplateCanvasRatio:(id)a0;
- (void)fetchGenericTemplateListForMaterials:(id)a0 withRequestParams:(id)a1 withExtraTrackInfo:(id)a2 completion:(id /* block */)a3;
- (id)featureConfig;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPGenericTemplateService> { struct NPGenericTemplateService *x0; struct __shared_weak_count *x1; })a0;
- (id)businessScene;
- (void)configTracker;
- (long long)applyWithGenericModel:(id)a0 toTarget:(id)a1 preprocessParams:(id)a2 followShootParams:(id)a3 applyProgress:(id /* block */)a4 applyCompletion:(id /* block */)a5;
- (id)removeGenericTemplate:(id)a0 fromTarget:(id)a1;
- (id)initWithDownloadConcurrent:(unsigned long long)a0;
- (id)removeGenericTemplateWithPreprocess:(id)a0 fromTarget:(id)a1;
- (id)getMutableSlotInfoArrWithTemplateModel:(id)a0 toTarget:(id)a1 deduplicateCloneSlots:(BOOL)a2;
- (BOOL)isTemplateUseFaceBeauty:(id)a0;
- (int)updateMutableSlotInfoWithPreProcess:(id)a0 toTarget:(id)a1 dynamicSlotInfos:(id)a2 updateCloneSlots:(BOOL)a3 refreshMainTrack:(BOOL)a4 preprocessParam:(id)a5;
- (id)bimAlgorithmModelList;
- (long long)updateMusicBeats:(id)a0 targetModel:(id)a1 preprocessParam:(id)a2;
- (BOOL)supportFunctionForStage:(unsigned long long)a0;
- (unsigned long long)frameExtractionStrategy;
- (struct CGSize { double x0; double x1; })videoFrameSizeForVideo:(id)a0 forStage:(unsigned long long)a1;
- (id)requestTimesForVideo:(id)a0 forStage:(unsigned long long)a1;
- (BOOL)enableAccurateFrameExtractionForVEFeature;
- (BOOL)isTemplateNeedPreprocess:(id)a0 targetModel:(id)a1 followShootParams:(id)a2 preprocessPath:(id)a3;
- (id)getSlotInfoWithTemplateModel:(id)a0 toTarget:(id)a1 slotUUID:(id)a2;
- (void)updateMutableSlotInfoArrWithTemplateModel:(id)a0 toTarget:(id)a1 dynamicSlotInfo:(id)a2 refreshMainTrack:(BOOL)a3;
- (id)draftFolderForTemplateModel:(id)a0;
- (void)configTemplateServiceWithDownloadConcurrent:(unsigned long long)a0;
- (long long)fetchGenericTemplate:(id)a0 withoutDependency:(BOOL)a1 priorityStrategy:(unsigned long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchGenericTemplateListForMaterials:(id)a0 withRequestParams:(id)a1 completion:(id /* block */)a2;
- (long long)fetchGenericTemplateWithoutDependency:(id)a0 priorityStrategy:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (long long)applyGenericTemplate:(id)a0 toTarget:(id)a1 followShootParams:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (long long)applyWithGenericModel:(id)a0 toTarget:(id)a1 followShootParams:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)getTemplateSummaryFromModel:(id)a0 completion:(id /* block */)a1;
- (long long)preprocessGenericTemplate:(id)a0 enableCloneSlots:(BOOL)a1 materials:(id)a2 followShootParams:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)cancelTask:(long long)a0 timeout:(BOOL)a1;
- (void)pauseTaskByTemplateModel:(id)a0;
- (void)cancelTaskByTemplateModel:(id)a0;
- (id)getMutableSlotInfoArrWithTemplateModel:(id)a0 toTarget:(id)a1;
- (id)getSlotLiveInfoWithTemplateModel:(id)a0 toTarget:(id)a1 slotUUID:(id)a2;
- (void)updateMutableSlotInfoArrWithTemplateModel:(id)a0 toTarget:(id)a1 dynamicSlotInfo:(id)a2;
- (int)updateMutableSlotInfoWithPreProcess:(id)a0 toTarget:(id)a1 dynamicSlotInfo:(id)a2 refreshMainTrack:(BOOL)a3 preProcessCallback:(id /* block */)a4 preprocessParam:(id)a5;
- (long long)templateResourceSize:(id)a0;
- (void)cancelTask:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
