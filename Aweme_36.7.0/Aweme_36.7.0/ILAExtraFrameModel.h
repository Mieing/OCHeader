@interface ILAExtraFrameModel : NSObject {
    struct shared_ptr<ILASDK::ExtraFrameDelegate> { struct ExtraFrameDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } extraFrame;
}

- (struct shared_ptr<ILASDK::ExtraFrameDelegate> { struct ExtraFrameDelegate *x0; struct __shared_weak_count *x1; })extraFrameImpl;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCallback:(id /* block */)a0;

@end
