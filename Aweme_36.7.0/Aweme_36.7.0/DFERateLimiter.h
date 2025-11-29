@class NSMutableArray;

@interface DFERateLimiter : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_counter;
}

@property (nonatomic) long long windowDuration;
@property (nonatomic) unsigned long long limitation;

- (BOOL)isRestricted;
- (void)increment;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (unsigned long long)count;

@end
