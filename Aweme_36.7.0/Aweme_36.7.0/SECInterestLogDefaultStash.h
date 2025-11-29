@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SECInterestLogDefaultStash : NSObject <SECInterestLogStash> {
    NSObject<OS_dispatch_queue> *_stashQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stashMutex;
}

@property (retain, nonatomic) NSMutableDictionary *stashes;
@property (retain, nonatomic) NSMutableArray *logTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitLogItem:(id)a0;
- (void)submitLogItemInStashQ:(id)a0;
- (id)logsBetween:(double)a0 andTime:(double)a1;
- (id)logsForType:(id)a0 between:(double)a1 andTime:(double)a2;
- (BOOL)isInStashQueue;
- (id)logsForType:(id)a0 before:(double)a1;
- (id)logsBefore:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupQueue;

@end
