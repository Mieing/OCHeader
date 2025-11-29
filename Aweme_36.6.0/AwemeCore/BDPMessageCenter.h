@class NSMutableDictionary;

@interface BDPMessageCenter : NSObject {
    NSMutableDictionary *dicMessage;
}

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (id)defaultCenter;

- (id)getMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
