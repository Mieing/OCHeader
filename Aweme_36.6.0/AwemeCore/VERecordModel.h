@interface VERecordModel : NSObject {
    struct shared_ptr<VEPublicRecordModel> { struct VEPublicRecordModel *__ptr_; struct __shared_weak_count *__cntrl_; } m_recordModel;
    struct shared_ptr<rec::TERecordModel> { struct TERecordModel *__ptr_; struct __shared_weak_count *__cntrl_; } m_teRecordModel;
}

- (void *)getRecordModel;
- (void)p_initRecordModel;
- (void)resetRecordModel:(void *)a0 teModel:(void *)a1;
- (void *)getTERecordModel;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
