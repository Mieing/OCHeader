@class AWEStudioClipInputData, AWEVideoPublishViewModel;

@interface ACCClipVideoEditAdapter : NSObject

@property (retain, nonatomic) AWEStudioClipInputData *inputData;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

+ (id)enterEditViewControllerWithInputData:(id)a0 originalPublishModel:(id)a1;
+ (id)enterEditViewControllerWithInputData:(id)a0 originalPublishModel:(id)a1 segmentedModel:(id)a2 extraDict:(id)a3 cancelBlock:(id /* block */)a4;
+ (void)setupCoverImageWithAssetModel:(id)a0 publishModel:(id)a1;
+ (id)commonImportInputData:(id)a0 createID:(id)a1 taskID:(id)a2;
+ (id)enterEditViewControllerWithInputData:(id)a0 originalPublishModel:(id)a1 segmentedModel:(id)a2;
+ (id)enterEditViewControllerWithInputData:(id)a0 originalPublishModel:(id)a1 segmentedModel:(id)a2 extraDict:(id)a3;
+ (id)createProjectWithModel:(id)a0 assetModel:(id)a1 createID:(id)a2 taskID:(id)a3;

- (id)initWithInputData:(id)a0;
- (id)initWithInputData:(id)a0 originalPublishModel:(id)a1 segmentedModel:(id)a2;
- (void)setupDataWithInputData:(id)a0 originalPublishModel:(id)a1 segmentedModel:(id)a2;
- (id)p_setupPublishModelWithInputData:(id)a0 originalPublishModel:(id)a1;
- (void)p_configVideoDataForPublishModel:(id)a0 originalPublishModel:(id)a1 inputData:(id)a2;
- (void)p_configImportDuetPublishModel:(id)a0 originalPublishModel:(id)a1 enableMultiTrack:(BOOL)a2;
- (void)p_configLivePhotoPublishModel:(id)a0 originalPublishModel:(id)a1 inputData:(id)a2;
- (void)p_commonConfigWithImportPublishModel:(id)a0 originalPublishModel:(id)a1 segmentedModel:(id)a2;
- (void)p_configAnchorForPublishModel:(id)a0;
- (void)p_configPublishModel:(id)a0 originalPublishModel:(id)a1;
- (void)p_configPublishModel:(id)a0 segmentedModel:(id)a1;
- (BOOL)isAssetsSupportFastImport;
- (id)ensureSpacesInText:(id)a0 atUserText:(id)a1;
- (id)initWithInputData:(id)a0 originalPublishModel:(id)a1;
- (void)updateVideoDataWithOriginalPublishModel:(id)a0;
- (BOOL)allowLongVideo;
- (double)videoMaxSeconds;
- (void).cxx_destruct;

@end
