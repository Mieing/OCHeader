@class NSLock, NSMutableDictionary;

@interface CSJDynamicLayoutManager : CSJRemoteEngineManager

@property (retain, nonatomic) NSLock *templateDataLock;
@property (retain, nonatomic) NSMutableDictionary *slotTemplateDataDictionary;
@property (retain, nonatomic) NSMutableDictionary *templateDataDictionary;

+ (id)pbu_templatePersistence;
+ (id)pbu_templateDataPersistence;
+ (void)deleteAllLocalData;
+ (id)sharedInstance;

- (id)cacheExistTemplateDataWithSlotId:(id)a0;
- (void)pbu_downloadTemplateWithDCChanged:(BOOL)a0 successBlock:(id /* block */)a1;
- (id)templateResourceLocalURLUseResourceArchiveWithURL:(id)a0;
- (id)pbu_fileNameWithUrl:(id)a0;
- (void)pbu_logWithSubType:(id)a0 format:(id)a1;
- (BOOL)pbu_isDownloadWithURL:(id)a0;
- (void)pbu_addWithURL:(id)a0 successBlock:(id /* block */)a1;
- (void)pbu_executeWithURL:(id)a0;
- (BOOL)pbu_needToDownloadWithNewVersion:(id)a0 useOnlineInfo:(BOOL)a1;
- (void)pbu_downloadResourcesAndSaveWithTemplateModel:(id)a0 templateUrl:(id)a1;
- (void)pbu_templateRegisterPrefixWithTemplateModel:(id)a0;
- (void)pbu_downloadResourcesAndSaveWithTemplateModel:(id)a0 templateUrl:(id)a1 useRescourceArchive:(BOOL *)a2;
- (void)pbu_downloadResourcesUseResourceListAndSaveWithTemplateModel:(id)a0 templateUrl:(id)a1;
- (void)pbu_downloadTemplateResourceWithURL:(id)a0 complete:(id /* block */)a1;
- (void)pbu_saveTemplate;
- (void)pbu_deleteUselessTemplateResourceFileWithLocalURLArray:(id)a0;
- (BOOL)pbu_cacheExistWithFileName:(id)a0;
- (void)fetchTemplateDataWithSlotId:(id)a0 model:(id)a1 completionBlock:(id /* block */)a2;
- (void)pbu_replaceTemplateDataWithSlotId:(id)a0 templateDataModel:(id)a1;
- (void)pbu_downloadTemplateDataWithModel:(id)a0 successBlock:(id /* block */)a1;
- (void)pbu_saveTemplateDataWithLatestTemplateDataModel:(id)a0;
- (void)pbu_printWithTemplateDataArray:(id)a0 prefix:(id)a1;
- (void)pbu_readTemplateFromDisk;
- (void)pbu_readTempDataFromDisk;
- (void)pbu_checkTemplateDataCountWithLatestTemplateDataModel:(id)a0;
- (void)pbu_readAllLocalData;
- (void)fetchTemplateWithDCChanged:(BOOL)a0;
- (id)mainTemplateModel;
- (id)templateDataModelWithTemplateDataModel:(id)a0;
- (id)templateResourceLocalURLWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
