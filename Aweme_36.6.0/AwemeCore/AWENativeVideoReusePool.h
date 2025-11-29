@class NSMutableArray;

@interface AWENativeVideoReusePool : NSObject

@property (retain, nonatomic) NSMutableArray *videoPlayerCachePool;
@property (retain, nonatomic) NSMutableArray *showedPlayerRecords;
@property (nonatomic) long long maxElementCount;

+ (id)sharedInstance;

- (id)findCanTakeBackElement;
- (id)addToReusePoolWith:(id)a0;
- (id)dequeuePlayerWithContext:(id)a0;
- (void)clearAllElement;
- (BOOL)hasCachedElement;
- (void).cxx_destruct;

@end
