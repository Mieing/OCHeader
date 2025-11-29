@interface MMKCgi : NSObject {
    struct Handle<std::shared_ptr<kinda::KCgi>> { struct shared_ptr<kinda::KCgi> { struct KCgi *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (int)getCgiId;
- (id)getCgiUrl;
- (int)getChannelType;
- (int)getTimeout;
- (int)getRetryCount;
- (id)getRequestData;
- (BOOL)getNeedNotify;
- (id)getRouteInfo;
- (long long)getNewDNSBusinessType;
- (void)onResp:(int)a0 responseData:(id)a1 extraInfo:(id)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
