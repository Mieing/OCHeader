@class WCFinderThreadSafeLRUCache, WCFinderWCDB;

@interface WCFinderFeedSessionBufferMgr : NSObject

@property (retain, nonatomic) WCFinderThreadSafeLRUCache *cache;
@property (weak, nonatomic) WCFinderWCDB *finderDB;

- (id)initWithFinderDB:(id)a0;
- (BOOL)addSessionBufferWithTid:(id)a0 scene:(int)a1 sessionString:(id)a2;
- (BOOL)addSessionBufferWithTid:(id)a0 scene:(int)a1 extraKey:(id)a2 sessionString:(id)a3;
- (BOOL)addSessionBufferArray:(id)a0;
- (void)updateFeedExposeTime:(id)a0 scene:(int)a1 exposeTimeInMS:(unsigned long long)a2;
- (void)updateFeedExposeTime:(id)a0 scene:(int)a1 exposeTimeInMS:(unsigned long long)a2 extraKey:(id)a3;
- (id)getSessionBufferWithTid:(id)a0 scene:(int)a1;
- (id)getSessionBufferWithTid:(id)a0 scene:(int)a1 extraKey:(id)a2;
- (id)_cacheKeyWithTid:(id)a0 scene:(int)a1 extraKey:(id)a2;
- (void).cxx_destruct;

@end
