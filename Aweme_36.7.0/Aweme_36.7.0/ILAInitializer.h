@class NSObject;
@protocol OS_dispatch_queue;

@interface ILAInitializer : NSObject {
    struct shared_ptr<ILASDK::Scan> { struct Scan *__ptr_; struct __shared_weak_count *__cntrl_; } _scan;
    struct shared_ptr<ILASDK::Search> { struct Search *__ptr_; struct __shared_weak_count *__cntrl_; } _search;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;

- (id)initWithConfig:(id)a0 scan:(struct shared_ptr<ILASDK::Scan> { struct Scan *x0; struct __shared_weak_count *x1; })a1;
- (void).cxx_destruct;
- (struct shared_ptr<ILASDK::Search> { struct Search *x0; struct __shared_weak_count *x1; })search;
- (id).cxx_construct;
- (struct shared_ptr<ILASDK::Scan> { struct Scan *x0; struct __shared_weak_count *x1; })scan;

@end
