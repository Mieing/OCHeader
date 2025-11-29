@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface IESFeatureInfoRecorder : NSObject

@property (nonatomic) long long maxSaveCount;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *storageKey;
@property (retain, nonatomic) NSMutableArray *infoKeyHistory;
@property (retain, nonatomic) NSMutableDictionary *infoDict;
@property (retain, nonatomic) NSLock *lock;

- (id)infoForKey:(id)a0;
- (id)initWithKey:(id)a0 maxSaveCount:(long long)a1;
- (void)removeOldInfoIfNeededWithNewKey:(id)a0;
- (id)getLastRangeWithRangeCount:(long long)a0;
- (id)infosForKeys:(id)a0 defaultInfo:(id)a1 rangeCnt:(long long)a2;
- (void).cxx_destruct;
- (void)loadData;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)saveData;

@end
