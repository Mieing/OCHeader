@class NSRecursiveLock;

@interface ACCImageAlbumExportBaseOperation : NSOperation

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSRecursiveLock *stateLock;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)updateExecutingStatus:(BOOL)a0;
- (void)updateFinishedStatus:(BOOL)a0;
- (void)setCancelled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)markAsFinished;
- (BOOL)isReady;
- (id)init;
- (BOOL)isAsynchronous;
- (void)dealloc;
- (void)cancel;

@end
