@class NSError, NSString, NSArray, NSMutableDictionary, LVTemplateProcessor, LVTemplateDataManager, GamePlayManager, NSObject;
@protocol OS_dispatch_queue, ACCMVTemplateModelProtocol, ACCDealWithServerPhotoManagerProtocol;

@interface ACCCutSameWorksManager : NSObject <ACCCutSameTemplateManagerDelegate, ACCCutSameWorksManagerProtocol>

@property (retain, nonatomic) NSError *processError;
@property (retain, nonatomic) NSArray *lastMaterials;
@property (retain, nonatomic) NSMutableDictionary *lastIndexMaterialsDict;
@property (retain, nonatomic) LVTemplateDataManager *currentTemplateDataManager;
@property (retain, nonatomic) LVTemplateProcessor *currentTemplateProcessor;
@property (nonatomic) double importProgress;
@property (nonatomic) double downloadTemplateProgress;
@property (nonatomic) double processTemplateProgress;
@property (copy, nonatomic) id /* block */ progressAction;
@property (copy, nonatomic) id /* block */ completionAction;
@property (nonatomic) BOOL isReplacing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (retain, nonatomic) id<ACCDealWithServerPhotoManagerProtocol> manager;
@property (retain, nonatomic) GamePlayManager *gameplayManager;
@property (retain, nonatomic) NSMutableDictionary *effectDownloaderSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> currrentTemplate;
@property (copy, nonatomic) id /* block */ downloadCompletion;

- (void)cancelCurrentTask;
- (void)clearDavinciEffectCache;
- (void)didDownloadAndProcessTemplateModel:(id)a0 progress:(double)a1;
- (void)didFinishDownloadTemplateModel:(id)a0 filePath:(id)a1;
- (void)didFailTemplateModel:(id)a0 withError:(id)a1;
- (void)didFinishedProcessTemplateModel:(id)a0 dataManager:(id)a1 withError:(id)a2;
- (void)didPrepareResourceTemplateModel:(id)a0 dataManager:(id)a1;
- (void)reprocessTemplate;
- (long long)realFragmentIdxWithAssetIdx:(long long)a0;
- (id)fragmentOfIndex:(long long)a0;
- (void)p_updateLastMaterialsWithMaterialAssetModels:(id)a0;
- (void)callbackProgress;
- (void)callbackForCompletionAction:(id)a0 canClearAction:(BOOL)a1;
- (id)p_generateIDToGameplayAlgorithmMapForNLETemplate;
- (id)p_generateIDToGameplayAlgorithmMapForLV:(id)a0;
- (id)selectPicToProcessForGamePlayFromAssets:(id)a0 withMap:(id)a1;
- (void)p_updateLastMaterialsWithGameplayOutputDic:(id)a0;
- (void)replaceFragments;
- (void)replaceFragmentsWithWorksAssetModels:(id)a0;
- (void)importMaterial:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)importWorksAssetModel:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)clearTemplateZip;
- (id)defaultConfigForLVExport;
- (id)lastImportedAssets;
- (id)selectPicToProcessForCartoonFromAssets:(id)a0 withMap:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
