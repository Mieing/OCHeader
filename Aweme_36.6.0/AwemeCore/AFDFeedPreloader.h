@class NSArray, NSMutableDictionary, NSMutableArray, NSIndexPath;
@protocol AFDFeedPreloaderDelegate;

@interface AFDFeedPreloader : NSObject

@property (nonatomic) BOOL isPreloading;
@property (nonatomic) long long preloadSequenceNumber;
@property (nonatomic) long long invalidPreloadSequenceNumber;
@property (copy, nonatomic) NSArray *preloadItems;
@property (retain, nonatomic) NSMutableArray *currentPreloadingIndexPaths;
@property (retain, nonatomic) NSIndexPath *fromIndexPath;
@property (nonatomic) BOOL preloadCompleted;
@property (nonatomic) double timeIntervalToRepreload;
@property (retain, nonatomic) NSMutableDictionary *completedPreloadItems;
@property (nonatomic) BOOL isPostPreloading;
@property (readonly, nonatomic) long long status;
@property (nonatomic) long long maximumPreloadCount;
@property (readonly, nonatomic) NSArray *preloadingItems;
@property (readonly, nonatomic) NSArray *preloadingIndexPaths;
@property (readonly, nonatomic) NSIndexPath *currentMaximumPreloadingIndexPath;
@property (weak, nonatomic) id<AFDFeedPreloaderDelegate> delegate;
@property (nonatomic) long long maximumPostPreloadCount;

- (void)startPreloadingWithPreloadItems:(id)a0 fromIndexPath:(id)a1;
- (void)logWithText:(id)a0;
- (void)cancelSoftly;
- (void)enqueuePreloadItems:(id)a0;
- (void)prepareToPreloadWithPreloadItems:(id)a0;
- (void)startPreloadingFromIndexPath:(id)a0;
- (id)preloadItemAtIndexPath:(id)a0;
- (id)nextIndexPathOfIndexPath:(id)a0;
- (void)startPreloadingWithPreloadItem:(id)a0 timeoutInterval:(double)a1 completion:(id /* block */)a2;
- (void)cancelWithCancelCurrentTask:(BOOL)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)resume;
- (void)cancel;

@end
