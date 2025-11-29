@interface AWEStudioEditImpl.AIEraseLogicComponent : NSObject <ACCRealLivePhotoServiceSubscriber, ACCAIEditConflictManagerSubscription, ACCSequenceEditServicePlayerSubscriber> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ lastSelectedTab;
    void /* unknown type, empty encoding */ lastSelectedSliderValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_config;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ctrService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiConflictManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tceCropService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_specialEffectService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_realLivePhotoService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sequenceEditService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiEditBaseLogicComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workspaceService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionDelegate;
    void /* unknown type, empty encoding */ originScale;
    void /* unknown type, empty encoding */ invalidToastText;
    void /* unknown type, empty encoding */ disableByConflicts;
    void /* unknown type, empty encoding */ _removeNewHintAction;
    void /* unknown type, empty encoding */ _aiConflictHeadChangeAction;
}

- (void)livePhotoDidChangeMode:(unsigned long long)a0;
- (void)AIEditorConflictHeadChange;
- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
