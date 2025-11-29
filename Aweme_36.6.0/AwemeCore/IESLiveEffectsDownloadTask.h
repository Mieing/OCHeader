@class NSMutableSet, NSMutableArray;

@interface IESLiveEffectsDownloadTask : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _currentCountLock;
}

@property (nonatomic) long long taskCount;
@property (nonatomic) long long currentCount;
@property (retain, nonatomic) NSMutableSet *nodeIDSet;
@property (retain, nonatomic) NSMutableSet *downloadedNodeIDSet;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (nonatomic) long long fetchMomentType;
@property (copy, nonatomic) id /* block */ completeCallback;
@property (retain, nonatomic) NSMutableArray *downloadedModels;
@property (retain, nonatomic) NSMutableArray *localSyncModels;
@property (retain, nonatomic) NSMutableArray *cancelModels;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (id)initWithFetchMomentType:(long long)a0 completeCallback:(id /* block */)a1;
- (void)downloadedWithModel:(id)a0 status:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addNode:(id)a0;
- (void)dealloc;

@end
