@class NPGenericTemplateService_OC, NSArray, CKGenericTemplateModel, NSDictionary, AWEVideoPublishViewModel;

@interface ACCGenericTemplateAlbumHandlerConfig : NSObject

@property (weak, nonatomic) NPGenericTemplateService_OC *presetService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (retain, nonatomic) NSArray *assets;
@property (nonatomic) unsigned long long templateSlotCount;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isPicTemplateScene;
@property (nonatomic) BOOL needAssetsDeduplicate;
@property (copy, nonatomic) id /* block */ didDownloadTemplateBlk;
@property (copy, nonatomic) id /* block */ didFillAssetsBlk;
@property (copy, nonatomic) id /* block */ didFillPublishModel;
@property (copy, nonatomic) id /* block */ willEnterEditPageBlk;
@property (copy, nonatomic) id /* block */ didEnterEditPageBlk;
@property (copy, nonatomic) id /* block */ preferEnterEditorBlk;

- (id)initWithPublishModel:(id)a0 templateModel:(id)a1 service:(id)a2;
- (void).cxx_destruct;

@end
