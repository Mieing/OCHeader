@interface AWEStudioAIGCImpl.AIGCUnifyLoadingLogicComponent : NSObject <ACCAIGCUnifyLoadingViewDelegate, ACCSequenceMediaContentViewProvider> {
    void /* unknown type, empty encoding */ isAppearUnifyLoadingView;
    void /* unknown type, empty encoding */ unifyResult;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_genericTemplateService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sequenceEditService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_specialEffectService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workspaceService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aigcUnifyLoadingService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyDIResolver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_serviceProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aigcSaveDraft;
    void /* unknown type, empty encoding */ $__lazy_storage_$_repository;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

- (void)transferAsync:(id)a0;
- (void)handleCancelSyncTaskNotification:(id)a0;
- (void)transferAsyncTaskAndDismissLoading:(id)a0;
- (void)transferAsyncTaskAndDismissLoadingInIM:(id)a0;
- (void)cancelTaskAndDismissLoadingWithClickType:(id)a0;
- (void)retryTaskAndDismissLoading:(id)a0;
- (void)cancelTaskWithCancelType:(id)a0;
- (BOOL)isDraftAndIsSavedFromButton;
- (void)onClickBackButtonWithLocation:(id)a0 subButton:(id)a1;
- (id)pieceInstanceViewAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
