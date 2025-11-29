@class AWECutSameDataExporter, LVExporterManager;

@interface AWESelectTemplateDataExporter : NSObject

@property (retain, nonatomic) LVExporterManager *exporter;
@property (retain, nonatomic) AWECutSameDataExporter *cutSameExporter;
@property (nonatomic) BOOL cancelByUser;

- (void)dataExportCancel;
- (void)dataExportWithPublishModel:(id)a0 inputModel:(id)a1 needReplaceMusic:(BOOL)a2 completion:(id /* block */)a3;
- (void)quickSaveInOneClickFilmingPublishModel:(id)a0 inputModel:(id)a1;
- (void)dataExportForOneClickFilmingWithPublishModel:(id)a0 inputModel:(id)a1 needReplaceMusic:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_addEditedTextsForAudit:(id)a0 inputModel:(id)a1;
- (void).cxx_destruct;

@end
