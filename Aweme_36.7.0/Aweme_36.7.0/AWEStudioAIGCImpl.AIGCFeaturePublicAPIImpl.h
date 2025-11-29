@class AWEBinding;

@interface AWEStudioAIGCImpl.AIGCFeaturePublicAPIImpl : NSObject <AWEStudioAIMateEditAIGCTaskPublicAPI> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ taskModel;
    void /* unknown type, empty encoding */ sourcecTaskModelCloseEditSignal;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeEditPageSignal;
    void /* unknown type, empty encoding */ sourcecTaskModelSaveEditSignal;
    void /* unknown type, empty encoding */ $__lazy_storage_$_saveEditPageSignal;
}

@property (nonatomic, retain) AWEBinding *closeEditPageSignal;
@property (nonatomic, retain) AWEBinding *saveEditPageSignal;

- (id)createAIMateEditTaskModel:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 viewContainer:(id)a3;
- (void)editPageSaveDraft;
- (void)cancelAllAIMateEditTask;
- (void)removeAllAIMateEditData;
- (void)clickPublishButtonWithType:(long long)a0;
- (void)markBizCreationDoneWithBusinessResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
