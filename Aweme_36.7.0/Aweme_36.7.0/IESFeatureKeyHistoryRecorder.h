@class NSString, NSMutableArray, NSLock;

@interface IESFeatureKeyHistoryRecorder : NSObject

@property (nonatomic) long long maxSaveCount;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *storageKey;
@property (retain, nonatomic) NSMutableArray *keyHistoryArray;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (void)addToLastIfNotExist:(id)a0;
- (id)initWithKey:(id)a0 maxSaveCount:(long long)a1;
- (void)addOrMoveToLast:(id)a0;
- (id)getLastRangeKeyList:(long long)a0 key:(id)a1 excludeThis:(BOOL)a2;
- (void)removeKeyIfNeeded;
- (id)getLastRangeWithKeyList:(id)a0 rangeCount:(long long)a1 key:(id)a2 excludeThis:(BOOL)a3 reverse:(BOOL)a4;
- (id)getLastRangeWithKeyList:(id)a0 rangeCount:(long long)a1 key:(id)a2 excludeThis:(BOOL)a3;
- (void)addToFirstIfNotExist:(id)a0;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (void)loadData;
- (void)saveData;

@end
