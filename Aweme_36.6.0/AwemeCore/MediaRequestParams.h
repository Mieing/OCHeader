@class NSString, NSDictionary;

@interface MediaRequestParams : NSObject {
    struct shared_ptr<media::processor::RequestParams> { struct RequestParams *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (nonatomic) long long requestId;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long httpType;
@property (copy, nonatomic) NSDictionary *headMap;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *extra;

- (id)initWithCppModel:(const void *)a0;
- (struct shared_ptr<media::processor::RequestParams> { struct RequestParams *x0; struct __shared_weak_count *x1; })cppModel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
