@class NSTimer, NSMutableDictionary, NSLock;

@interface IESForestExpiringObjectSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSTimer *clearIntervalTimer;
@property (retain, nonatomic) NSLock *dictLock;
@property double maxAge;
@property (nonatomic) double clearInterval;

- (BOOL)updateObject:(id)a0 withExpiredDate:(id)a1;
- (void)clearExpiredCacheKey;
- (void)doClearExpiredCacheKey;
- (void).cxx_destruct;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (void)dealloc;
- (BOOL)updateObject:(id)a0;

@end
