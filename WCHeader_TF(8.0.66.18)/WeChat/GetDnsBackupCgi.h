@class Get3rdDnsReq;

@interface GetDnsBackupCgi : WCBaseCgi {
    struct weak_ptr<mars::cdn::Get3rdDnsCallback> { struct Get3rdDnsCallback *__ptr_; struct __shared_weak_count *__cntrl_; } callback_;
}

@property (retain, nonatomic) Get3rdDnsReq *get3rdDnsReq;

- (id)init;
- (void)setCallback:(struct shared_ptr<mars::cdn::Get3rdDnsCallback> { struct Get3rdDnsCallback *x0; struct __shared_weak_count *x1; })a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
