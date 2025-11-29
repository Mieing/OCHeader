@class ACCGenericTemplateTTSTaskManager, ACCGenericTemplatePreprocessTaskManager, ACCGenericTemplateTextParamManager, UIView;
@protocol ACCTextLoadingViewProtcol, AWEAIGCBusinessTaskProtocol;

@interface ACCPicTemplateAlbumHandler : ACCGenericTemplateUnifyAlbumHandler

@property (nonatomic) BOOL hasCancelRequest;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (weak, nonatomic) id<AWEAIGCBusinessTaskProtocol> aigcTask;
@property (retain, nonatomic) ACCGenericTemplatePreprocessTaskManager *preprocessTaskManager;
@property (retain, nonatomic) ACCGenericTemplateTextParamManager *textParamTaskManager;
@property (retain, nonatomic) ACCGenericTemplateTTSTaskManager *ttsTaskManager;

- (void)handleClickAlbumNextActionWithConfig:(id)a0;
- (void)p_newHandleClickAlbumNextActionWithConfig:(id)a0;
- (void)configImageInfoWithAsset:(id)a0 publishModel:(id)a1;
- (void)configBusinessDataBeforeEnterEditor:(id)a0 templateModel:(id)a1;
- (void).cxx_destruct;

@end
