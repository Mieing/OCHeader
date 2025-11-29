@class MJOCRProcessor, NSString, MMLRUCache, NSMutableDictionary, MJPlaybackViewModel;
@protocol MJMovieTextSuggestionSnapshotGeneratorDelegate;

@interface MJMovieTextSuggestionSnapshotGenerator : NSObject

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) MMLRUCache *cache;
@property (retain, nonatomic) NSMutableDictionary *runningTasks;
@property (retain, nonatomic) MJOCRProcessor *ocrProcessor;
@property (weak, nonatomic) id<MJMovieTextSuggestionSnapshotGeneratorDelegate> delegate;
@property (readonly, weak, nonatomic) MJPlaybackViewModel *playbackVM;

+ (void)uploadSnapshotToCDN:(id)a0;
+ (id)cacheKeyFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (id)cacheKeyForSnapshot:(id)a0;
+ (id)genSessionID;

- (id)initWithPlaybackVM:(id)a0;
- (void)reset;
- (void)notifyUserInputSessionBegin;
- (void)notifyUserInputSessionEnd;
- (id)fetchSnapshotFromCacheAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)asyncGenerateSnapshotAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isValidSnapshot:(id)a0;
- (void)processSnapshotImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)markAllSnapshotsInRunningAsPrefetched;
- (id)fetchSnapshotAtTimeFromCache:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)addSnapshotToCache:(id)a0;
- (id)fetchSnapshotInRunningAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)addSnapshotToRunningTasks:(id)a0;
- (void)removeSnapshotFromRunningTasks:(id)a0;
- (void).cxx_destruct;

@end
