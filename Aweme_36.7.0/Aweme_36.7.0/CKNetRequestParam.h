@class NSString, NSDictionary;

@interface CKNetRequestParam : NSObject {
    struct shared_ptr<ckresource::net::CKHttpRequest> { struct CKHttpRequest *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlPath;
@property (nonatomic) long long requestMethod;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSDictionary *trackExtraParams;
@property (copy, nonatomic) NSDictionary *urlQueryParams;

- (struct shared_ptr<ckresource::net::CKHttpRequest> { struct CKHttpRequest *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPValue:(struct shared_ptr<ckresource::net::CKHttpRequest> { struct CKHttpRequest *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithURL:(id)a0 urlPath:(id)a1 requestMethod:(long long)a2 parameters:(id)a3 headerFields:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
