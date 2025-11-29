@class NSMutableOrderedSet;

@interface AFDAwemeVideoCacheInfoRecorder : NSObject

@property (class, readonly, nonatomic) AFDAwemeVideoCacheInfoRecorder *sharedRecorder;

@property (retain, nonatomic) NSMutableOrderedSet *cacheInfos;

- (void)didFinishBufferingAwemeWithAwemeID:(id)a0;
- (void)handleApplicationDidEnterBackgroundNotification:(id)a0;
- (BOOL)checkIfAwemeGetsTotallyBufferedWithAwemeID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
