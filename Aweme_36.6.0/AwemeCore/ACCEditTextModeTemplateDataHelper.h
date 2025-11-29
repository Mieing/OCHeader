@class AWECodeGenPerformanceAnalysisModel, NSString, NSArray, ACCCameraSubscription, ACCModernTextModeStyleModel, NSMutableDictionary, NSDictionary, NSMutableSet, ACCEditTextModeLocalCacheHelper;

@interface ACCEditTextModeTemplateDataHelper : NSObject <ACCEditTextModeInjectTemplatesDelegate>

@property (copy, nonatomic) NSArray *templates;
@property (copy, nonatomic) NSArray *originalTemplates;
@property (retain, nonatomic) NSMutableDictionary *rectDict;
@property (retain, nonatomic) NSMutableSet *preloadingKeys;
@property (retain, nonatomic) ACCEditTextModeLocalCacheHelper *localCacheHelper;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL isFetchTemplates;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *requestText;
@property (retain, nonatomic) ACCModernTextModeStyleModel *styleModel;
@property (retain, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSDictionary *styleIdCache;
@property (copy, nonatomic) NSDictionary *dimensionCache;
@property (copy, nonatomic) NSDictionary *templateCache;
@property (copy, nonatomic) NSString *rotatingTemplateId;
@property (retain, nonatomic) NSMutableDictionary *rotateTaskCache;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *categoryList;
@property (nonatomic) long long selectRandomTemplateNumber;
@property (nonatomic) BOOL disableDefaultCategory;
@property (copy, nonatomic) NSDictionary *moodSwingCache;
@property (copy, nonatomic) NSDictionary *wordSegmentsCache;
@property (copy, nonatomic) NSString *originText;
@property (nonatomic) BOOL isSplitSuccess;
@property (nonatomic) double splitDuration;
@property (copy, nonatomic) AWECodeGenPerformanceAnalysisModel *performanceAnalysisModel;
@property (copy, nonatomic) NSString *firstRequestFailedReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonTrackParams:(id)a0;
+ (id)fixedText:(id)a0;
+ (id)fixedText:(id)a0 limitCount:(unsigned long long)a1;
+ (id)transferTextModeComposerLandingType:(long long)a0;
+ (id)customTemplateModel;

- (void)cleanImageCache;
- (id)initWithTaskId:(id)a0;
- (void)readImagesRectFromCache;
- (void)p_updateTemplateModels:(id)a0 fetchError:(id)a1;
- (void)requestStyleImageForText:(id)a0 templateModel:(id)a1 onlyCurrentStyle:(BOOL)a2 startDownloadImage:(id /* block */)a3 completion:(id /* block */)a4;
- (void)requestImageForText:(id)a0 templateModels:(id)a1 preload:(BOOL)a2 isFirstImage:(BOOL)a3 skipSteps:(long long)a4 splitTime:(long long)a5 startDownloadImage:(id /* block */)a6 completion:(id /* block */)a7;
- (void)updateCurrentText:(id)a0;
- (void)p_removePreloadingKeys:(id)a0;
- (void)cacheMoodSwing:(id)a0 wordSegments:(id)a1 textMd5:(id)a2;
- (id)templateModelWithTemplateId:(id)a0;
- (void)saveImagesRectToCache;
- (void)requestRotateImageForText:(id)a0 templateModels:(id)a1 fetchNewStyle:(BOOL)a2 onlyCurrentStyle:(BOOL)a3 startDownloadImage:(id /* block */)a4 completion:(id /* block */)a5;
- (void)p_preloadImagesForText:(id)a0 templateModels:(id)a1 groupCount:(unsigned long long)a2;
- (void)resortFirstTemplateId:(id)a0;
- (void)injectTemplateServiceDidStartFetchTemplateList:(id)a0;
- (void)injectTemplateService:(id)a0 didFinishFetchTemplateList:(id)a1 insertFirstTemplateID:(id)a2;
- (void)injectTemplateService:(id)a0 didFailFetchTemplateList:(id)a1;
- (void)injectTemplateService:(id)a0 didFinishGenerateTemplateImageWithModel:(id)a1 imageDownloadPath:(id)a2 imageGenModel:(id)a3 inputText:(id)a4 completion:(id /* block */)a5;
- (void)injectTemplateService:(id)a0 didFailGenerateTemplateImageWithModel:(id)a1 error:(id)a2;
- (void)fetchAllTextModeTemplates;
- (void)requestImageForText:(id)a0 templateModel:(id)a1 isFirstImage:(BOOL)a2 skipSteps:(long long)a3 splitTime:(long long)a4 startDownloadImage:(id /* block */)a5 completion:(id /* block */)a6;
- (void)requestRotateImageForText:(id)a0 templateModel:(id)a1 shouldSwitch:(id /* block */)a2 startDownloadImage:(id /* block */)a3 completion:(id /* block */)a4;
- (void)preloadImagesForText:(id)a0 templateModel:(id)a1 config:(id)a2;
- (void)updateTemplateDefaultStyleIdFromCache:(id)a0;
- (void)updateTemplateDimensionsFromCache:(id)a0;
- (void)saveStyleModel:(id)a0 templateId:(id)a1;
- (id)randomTemplateId;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
