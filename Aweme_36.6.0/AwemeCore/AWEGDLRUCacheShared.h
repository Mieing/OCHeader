@class NSMutableArray, NSMutableDictionary;

@interface AWEGDLRUCacheShared : NSObject

@property (nonatomic) int maxCount;
@property (retain, nonatomic) NSMutableArray *keysArr;
@property (retain, nonatomic) NSMutableDictionary *dataDic;
@property (retain, nonatomic) NSMutableArray *queue;
@property (nonatomic) int doingTask;

+ (void)requestWithParams:(id)a0 bizCode:(id)a1 activityID:(id)a2 cacheFrom:(id)a3 completion:(id /* block */)a4;
+ (void)stopAllPreRequestTask;
+ (void)trackPrefetchWithParams:(id)a0;
+ (id)shared;

- (id)getDataWithBizCode:(id)a0 keyMap:(id)a1;
- (void)addWithBizCode:(id)a0 keyMap:(id)a1 ditoData:(id)a2 cacheFrom:(id)a3 cacheFromSubScene:(id)a4;
- (void)removeWithKey:(id)a0;
- (void)initOrResetWithMaxCount:(int)a0;
- (id)filterWhiteListComponents:(id)a0 bizCode:(id)a1;
- (id)getResultKeyWithBizCode:(id)a0 keyMap:(id)a1;
- (void)moveToHeaderForKey:(id)a0;
- (void)runTaskImmediately:(id)a0;
- (void)tryRunTask;
- (void).cxx_destruct;

@end
