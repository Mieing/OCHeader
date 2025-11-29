@class NSString;

@interface BXNetworkCenterOC : NSObject {
    struct shared_ptr<bytebench::BXNetworkProxyOC> { struct BXNetworkProxyOC *__ptr_; struct __shared_weak_count *__cntrl_; } networkProxy;
}

@property (copy, nonatomic) NSString *baseUrl;

+ (id)sharedInstace;

- (void)initNetworkCenter:(id)a0;
- (int)downloadFile:(id)a0 dir:(id)a1 fileName:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
