@interface AWEStudioEditImpl.EditTextOnImageLogicComponent : NSObject <ACCGenericTemplateApplierSubscriber> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_genericTemplateApplierService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_megaEditor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editKit;
    void /* unknown type, empty encoding */ tarotFlow;
    void /* unknown type, empty encoding */ effectName;
}

- (void)templateApplierDidApplyEffect:(id)a0;
- (void)templateApplierDidRemoveEffect:(id)a0 context:(id)a1;
- (void)templateApplierDidApplyForUpdateVideoDataWithTemplateModel:(id)a0 scene:(unsigned long long)a1;
- (void)templateApplierDidRemoveWithTemplateId:(id)a0 changeInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
