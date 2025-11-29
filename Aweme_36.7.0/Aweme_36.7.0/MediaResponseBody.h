@class NSString;

@interface MediaResponseBody : NSObject {
    struct shared_ptr<media::processor::ResponseBody> { struct ResponseBody *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *response;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *extra;

- (id)initWithCppModel:(const void *)a0;
- (struct shared_ptr<media::processor::ResponseBody> { struct ResponseBody *x0; struct __shared_weak_count *x1; })cppModel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
