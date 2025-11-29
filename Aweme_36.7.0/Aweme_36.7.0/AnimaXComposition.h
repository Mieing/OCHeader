@interface AnimaXComposition : NSObject {
    struct shared_ptr<lynx::animax::CompositionModel> { struct CompositionModel *__ptr_; struct __shared_weak_count *__cntrl_; } _model;
}

- (id)initWithSharedModel:(void *)a0;
- (void).cxx_destruct;
- (double)endFrame;
- (id).cxx_construct;
- (double)startFrame;
- (void *)internalModel;

@end
