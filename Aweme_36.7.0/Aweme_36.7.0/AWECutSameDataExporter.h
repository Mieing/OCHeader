@class AWECutSameDataExporterInputModel, NSObject, AWEVideoPublishViewModel;
@protocol OS_dispatch_group;

@interface AWECutSameDataExporter : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWECutSameDataExporterInputModel *inputModel;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *saveFramsToUploadGroup;

- (void)p_addSelectedAssetsCount;
- (void)p_fetchAssetsLocationInfos;
- (void)p_addEditedTextsForAudit;
- (void)callbackForCompletion:(id /* block */)a0;
- (void)exportCutSameDataWithPublishModel:(id)a0 inputModel:(id)a1 completion:(id /* block */)a2;
- (id)p_saveOriginFramesImage:(id)a0;
- (void).cxx_destruct;

@end
