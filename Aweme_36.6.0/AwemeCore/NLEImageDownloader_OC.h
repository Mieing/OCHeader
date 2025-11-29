@interface NLEImageDownloader_OC : NSObject {
    struct shared_ptr<nleimage_api::NLEImageDownloader> { struct NLEImageDownloader *__ptr_; struct __shared_weak_count *__cntrl_; } _cppDownloader;
}

+ (id)getFontFromDirectory:(id)a0;

- (long long)getResources:(id)a0 withCacheValidTimeInMs:(unsigned long long)a1 success:(id /* block */)a2 failWithCode:(id /* block */)a3;
- (long long)getResources:(id)a0 withCacheValidTimeInMs:(unsigned long long)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (id)getResourceFromCache:(id)a0;
- (id)getResource:(id)a0;
- (long long)getUrsResources:(id)a0 withCacheVaildTimeInMs:(int)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (long long)getUrsResources:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithParams:(id)a0;

@end
