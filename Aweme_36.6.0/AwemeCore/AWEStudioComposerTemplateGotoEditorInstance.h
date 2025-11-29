@class NPGenericTemplateService_OC, CKGenericTemplateModel, ACCGenericTemplateAlbumHandler, AWEStudioComposerPrepareStageContext;

@interface AWEStudioComposerTemplateGotoEditorInstance : NSObject

@property (weak, nonatomic) AWEStudioComposerPrepareStageContext *weakContext;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (retain, nonatomic) ACCGenericTemplateAlbumHandler *genericTemplateHandler;
@property (retain, nonatomic) NPGenericTemplateService_OC *service;

+ (id)attachKey;

- (void)p_fetchDetail;
- (void)p_cleanupWithoutCallback;
- (void)p_downloadResource;
- (void)p_finishWithError:(id)a0;
- (void)p_apply;
- (void)p_jump;
- (void).cxx_destruct;
- (void)start;

@end
