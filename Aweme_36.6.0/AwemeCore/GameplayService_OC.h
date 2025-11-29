@interface GameplayService_OC : NSObject {
    struct GamePlayService { struct shared_ptr<media::processor::INetworkDelegate> { struct INetworkDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } networkDelegate; struct shared_ptr<media::processor::IThreadDelegate> { struct IThreadDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } threadDelegate; struct shared_ptr<media::processor::IFileDelegate> { struct IFileDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } fileDelegate; } _cppModel;
}

- (void)gameplay:(id)a0 config:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)configDelegate;

@end
