@class ACCGenericTemplateLoadingHelper, NSArray, CKGenericTemplateModel, NPGenericTemplateService_OC, AWEVideoPublishViewModel, ACCGenericTemplateAlbumHandlerConfig;

@interface ACCGenericTemplateUnifyAlbumHandler : NSObject

@property (retain, nonatomic) NSArray *albumHelpers;
@property (retain, nonatomic) ACCGenericTemplateLoadingHelper *loadingHelper;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) CKGenericTemplateModel *templateModel;
@property (weak, nonatomic) NPGenericTemplateService_OC *service;
@property (retain, nonatomic) ACCGenericTemplateAlbumHandlerConfig *config;

- (id)initWithAlbumScene:(unsigned long long)a0;
- (void)enterEditWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)startWithDownloadTemplateResourceFilesIfNeeded:(id)a0 service:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)setupAlbumHelpersWithScene:(unsigned long long)a0;
- (BOOL)notifyWillDownloadTemplateWithConfig:(id)a0;
- (BOOL)notifyDidDownloadWithConfig:(id)a0 error:(id)a1;
- (BOOL)notifyWillFillAssetsWithConfig:(id)a0;
- (BOOL)notifyDidFillAssetsWithConfig:(id)a0 error:(id)a1;
- (BOOL)notifyWillFillPublishModelWithConfig:(id)a0;
- (id)fillPublishModel:(id)a0 templateModel:(id)a1 assets:(id)a2 needDeduplicated:(BOOL)a3;
- (BOOL)notifyDidFillPublishModelWithConfig:(id)a0;
- (BOOL)notifyWillEnterEditorWithConfig:(id)a0;
- (BOOL)notifyDidEnterEditorWithConfig:(id)a0;
- (void)fillAssets:(id)a0 completion:(id /* block */)a1;
- (void)handleClickAlbumNextActionWithConfig:(id)a0;
- (void).cxx_destruct;

@end
