@class NSMutableDictionary;

@interface IESIMMessageCenter : NSObject {
    NSMutableDictionary *p_messageHash;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

+ (id)sharedCenter;

- (id)getMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
