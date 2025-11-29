@interface MMKNetworkMockManager : NSObject {
    struct Handle<std::shared_ptr<kinda::KNetworkMockManager>> { struct shared_ptr<kinda::KNetworkMockManager> { struct KNetworkMockManager *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

+ (id)getCgiList;

- (id)initWithCpp:(const void *)a0;
- (id)requestDataToJson:(id)a0;
- (id)responseDataToJson:(id)a0;
- (id)jsonToResponseData:(id)a0;
- (id)jsonToRequestData:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
