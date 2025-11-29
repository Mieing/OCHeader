@class NSRecursiveLock, ACCMVPhotoCalculateOperation, PHAsset, ACCIntelligentMovieBIMManager;

@interface ACCOneClickFilmingOptExtractionOperation : NSOperation

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSRecursiveLock *stateLock;
@property (weak, nonatomic) ACCMVPhotoCalculateOperation *calculateOp;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) ACCIntelligentMovieBIMManager *bimManager;
@property (copy, nonatomic) id /* block */ resultCompletion;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)handleError;
- (void)distributeExtractionOp;
- (void)setCancelled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end
