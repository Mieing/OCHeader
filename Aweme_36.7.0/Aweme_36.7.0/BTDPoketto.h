@class NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface BTDPoketto : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *cidKeys;
@property (retain, nonatomic) NSMutableArray *allKeys;
@property (retain, nonatomic) NSMutableDictionary *models;

+ (id)sharedInstance;

- (id)getObjectForCid:(id)a0 logExtra:(id)a1;
- (id)mmkv;
- (void)setIsFromLocal:(id)a0;
- (id)getObjectForCid:(id)a0;
- (id)parseKeyFromCid:(id)a0 logExtra:(id)a1 model:(id)a2;
- (void)removeExpiredData:(id)a0;
- (id)sortedData;
- (id)keyFromObject:(id)a0;
- (void)setObject:(id)a0 forRit:(id)a1;
- (void)setObject:(id)a0 forReqId:(id)a1;
- (void)removeDataForKey:(id)a0 cid:(id)a1;
- (BOOL)isConfirmProtocol:(id)a0;
- (id)ritFromObject:(id)a0;
- (id)ritFromLogExtra:(id)a0;
- (void)cacheResultForCid:(id)a0 object:(id)a1 key:(id)a2;
- (BOOL)getIsFromLocal:(id)a0;
- (id)reqIdFromObject:(id)a0;
- (void)removeObjectForCid:(id)a0 logExtra:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)save;
- (void)setObject:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeData:(id)a0;
- (unsigned long long)isValidObject:(id)a0;
- (void)saveObject:(id)a0 forKey:(id)a1;

@end
