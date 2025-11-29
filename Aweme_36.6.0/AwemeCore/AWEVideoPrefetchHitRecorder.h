@class AWEVideoObjectPool, NSMutableDictionary;
@protocol AWEVideoPrefetchHitDelegate;

@interface AWEVideoPrefetchHitRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *statusDict;
@property (retain, nonatomic) AWEVideoObjectPool *statusPool;
@property (weak, nonatomic) id<AWEVideoPrefetchHitDelegate> delegate;
@property (nonatomic) unsigned long long lifeTimeMax;

+ (id)sharedInstance;

- (void)startPlayWithKey:(id)a0;
- (void)startPrefetchWithKey:(id)a0;
- (void)prefetchingWithKey:(id)a0 size:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
