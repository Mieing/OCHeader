@interface AWEStudioEditImpl.EditEffectCaptionLogicComponent : NSObject <AEKDiffChangeSubscriber, ACCModernAutoCaptionPageDataSource, ACCModernAutoCaptionPageDelegate, ACCGenericTemplateApplierSubscriber, AEKPreviewEditorSubscriber> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_genericTemplateApplierService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_megaEditor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editKit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textStickerService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_draftSaveService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editMusicComponentService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sideslipTemplateComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_autoCaptionPublicAPI;
    void /* unknown type, empty encoding */ preview;
    void /* unknown type, empty encoding */ captionViewController;
    void /* unknown type, empty encoding */ templateEffectModel;
    void /* unknown type, empty encoding */ fontEffectModel;
}

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredMediaContainerFrame;
- (double)preferredControlHeight;
- (double)preferredBottomViewHeight;
- (id)stickerContainerView;
- (BOOL)enablePostSelection;
- (long long)audioState;
- (void)syncRefreshCurrentFrame:(double)a0;
- (void)renderAutoCaptions:(id)a0 styleConfigs:(id)a1 intelligenceInfo:(id)a2;
- (void)refreshWithAutoCaptions:(id)a0 removed:(id)a1 modified:(id)a2 styleConfigs:(id)a3 intelligenceInfo:(id)a4 addedCaption:(BOOL)a5;
- (void)renderExtraTextModelWithTemplateInfo:(id)a0;
- (void)stylesDidChanged:(id)a0 forTypes:(id)a1;
- (void)recoverAutoCaptions:(id)a0 styleConfigs:(id)a1 intelligenceInfo:(id)a2;
- (void)removeAllCaptions;
- (void)captionViewExited:(id)a0;
- (void)templateApplierDidApplyEffect:(id)a0;
- (void)templateApplierDidRemoveEffect:(id)a0 context:(id)a1;
- (void)templateApplierDidApplyForUpdateVideoDataWithTemplateModel:(id)a0 scene:(unsigned long long)a1;
- (void)templateApplierDidRemoveWithTemplateId:(id)a0 changeInfo:(id)a1;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
