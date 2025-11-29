@class NSMutableDictionary;

@interface BDWebImageButtonImageSetter : NSObject {
    NSMutableDictionary *_requestDictionary;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)imageRequestForState:(unsigned long long)a0;
- (void)setImageRequest:(id)a0 state:(unsigned long long)a1;
- (id)backgroundRequestForState:(unsigned long long)a0;
- (void)setBackgroundRequest:(id)a0 state:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)requestDictionary;

@end
