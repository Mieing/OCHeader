@class _AWECustomPropUploadInfo, AWEPublishFlowModel, AWEVideoPublishViewModel;

@interface AWEPublishCustomPropUploadStage : AWEPublishBaseStage {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) _AWECustomPropUploadInfo *backupUploadPropInfo;
@property (nonatomic) BOOL startBackup;

- (id)initWithPublishViewModel:(id)a0;
- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (BOOL)needToUploadCustomProp;
- (id)uploadInfoEnableURS:(BOOL *)a0;
- (void)startUploadWithInfo:(id)a0;
- (BOOL)p_isPhotoMode;
- (void)registerObserverCustomEffectBackupIfNeed;
- (id)p_getAbsulatePathWithPath:(id)a0 templateEffectID:(id)a1 isVideo:(BOOL)a2 isPackagePath:(BOOL)a3;
- (void)p_uploadCustomizedEffectWithEffectID:(id)a0 sourceID:(id)a1 filePath:(id)a2 iconPath:(id)a3 coverPath:(id)a4;
- (void)p_trackForUploadCustomPackageWithState:(BOOL)a0 effectID:(id)a1 sourceID:(id)a2 error:(id)a3;
- (void)p_trackCreateAigcChildEffecshootway:(id)a0 aigccreateway:(id)a1 keywordslist:(id)a2 originalpropid:(id)a3 propid:(id)a4;
- (void)observeCustomSticker;
- (void)registerObserverCustomEffectURSBackupIfNeed;
- (void)startUploadFromURSWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setStatus:(long long)a0;
- (void)run;

@end
