@class UIView, NSString, NSArray, VEAlgorithmSession, NSError, NSMutableDictionary, AWEVideoPublishViewModel, NSMutableArray, IESEffectModel;
@protocol ACCProcessViewProtcol;

@interface AWEDealWithServerPhotoManager : NSObject <ACCDealWithServerPhotoManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *resultCaches;
@property (copy, nonatomic) NSString *cacheFolder;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressView;
@property (retain, nonatomic) NSString *hintStr;
@property (nonatomic) unsigned long long failCount;
@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;
@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) NSError *processError;
@property (retain, nonatomic) NSMutableArray *algorithmNames;
@property (retain, nonatomic) NSArray *selectedResources;
@property (retain, nonatomic) IESEffectModel *templateEffectModel;
@property (copy, nonatomic) id /* block */ enterVideoEditorBlock;
@property (retain, nonatomic) AWEVideoPublishViewModel *originUploadPublishModel;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)updateProcessWithView:(id)a0;
- (void)processByLocalAlgorithm;
- (id)getAlgorithmConfigsWithModelPath:(id)a0 andImgPaths:(id)a1;
- (void)invokeErrorBlock;
- (void)processWithResourceModels:(id)a0;
- (void)showRealProgressLoadingView;
- (void)updateProcessViewWithProgress:(double)a0;
- (void)invokeCallbackWithResults:(id)a0;
- (void)logForMVAlgorithmServerRequest:(id)a0;
- (id)createMVTemplateFolderIfExistWithEffectModel:(id)a0;
- (void)processPicWithResourceModel:(id)a0 finalResults:(id)a1 mvPhotoFolder:(id)a2 serverExecutedImageDict:(id)a3 completion:(id /* block */)a4;
- (void)processVideoWithResourceModel:(id)a0 finalResults:(id)a1 mvPhotoFolder:(id)a2 serverExecutedImageDict:(id)a3 completion:(id /* block */)a4;
- (BOOL)saveResultsToDraft:(id)a0;
- (void)monitorForAlgorithmExtraDetectImage;
- (void).cxx_destruct;
- (void)process;
- (void)showLoadingView;

@end
