@interface ILALatLngModel : NSObject {
    struct shared_ptr<ILASDK::ReadAssetLatLngDelegate> { struct ReadAssetLatLngDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } latLonDelegate;
}

- (struct shared_ptr<ILASDK::ReadAssetLatLngDelegate> { struct ReadAssetLatLngDelegate *x0; struct __shared_weak_count *x1; })readLatLonImpl;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCallback:(id /* block */)a0;

@end
