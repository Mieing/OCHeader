@class NSString, ACCPicTemplateShootEntranceConfigHelper, AWEUITransitionHost;

@interface AWEVideoRouterCutSameService : NSObject <AWEStudioCutSameService>

@property (retain, nonatomic) ACCPicTemplateShootEntranceConfigHelper *shootEntranceConfig;
@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioDouyinLiteAdapterClass;

- (id)createCutSameMVTemplateWithTemplateId:(id)a0 withInfo:(id)a1 repoMissionModel:(id)a2 challangeModel:(id)a3 commercialAnchorModel:(id)a4;
- (id)startCutSameMVVideoWithTemplate:(id)a0 withInfo:(id)a1;
- (id)createCutSameMVTemplateWithTemplateId:(id)a0 withInfo:(id)a1;
- (id)createCutSameMVVideoWithTemplateId:(id)a0 assetPathList:(id)a1 withInfo:(id)a2;
- (id)aAWEStudioDouyinLiteAdapter;
- (id)configInputData:(id)a0 featureModel:(id)a1;
- (id)startCutSameMVVideoWithTemplate:(id)a0 withInfo:(id)a1 sourceInfo:(id)a2;
- (id)createCutSameMVTemplateWithTemplateId:(id)a0 withInfo:(id)a1 repoMissionModel:(id)a2 challangeModel:(id)a3;
- (void)cancelCreateCutSameMVVideo;
- (void)p_createCutsameWithServerExecutionAlertIfNeedWithTemplateModel:(id)a0 withInfo:(id)a1 sourceInfo:(id)a2 completion:(id /* block */)a3;
- (void)p_configPublishModel:(id)a0 externalInfo:(id)a1;
- (id)p_genRepoPOIFromInfoDic:(id)a0;
- (void)p_createCutSameMVTemplateWithTemplate:(id)a0 publishModel:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void)trackShootWithPublishModel:(id)a0 info:(id)a1;
- (void)p_presentCutSameImportViewController:(id)a0 withInfo:(id)a1 sourceInfo:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
