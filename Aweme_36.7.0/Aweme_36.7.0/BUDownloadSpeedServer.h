@class NSMutableArray, NSMutableDictionary;

@interface BUDownloadSpeedServer : NSObject {
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _shared_mutexattr_t;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableArray *speeds;
@property (retain, nonatomic) NSMutableDictionary *modelCache;

+ (id)server;

- (id)getSpeedModelWithUrl:(id)a0;
- (id)downloadSpeedServerCreateSpeedModelWithUrl:(id)a0;
- (double)downloadSpeeds;
- (void)startDownloadWithUrl:(id)a0;
- (id)downloadingWithUrl:(id)a0;
- (void)finishDownloadWithUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
