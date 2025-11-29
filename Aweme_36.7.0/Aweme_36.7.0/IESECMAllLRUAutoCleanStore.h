@class MMKV;

@interface IESECMAllLRUAutoCleanStore : NSObject

@property (retain, nonatomic) MMKV *autoCleanStore;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long maxCountTabs;
@property (nonatomic) long long clearExpireTime;
@property (nonatomic) BOOL useNew;
@property (nonatomic) BOOL forbidTrim;

+ (id)shareInstance;

- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 isTabs:(BOOL)a2;
- (id)objectOfClass:(Class)a0 forKey:(id)a1 isTabs:(BOOL)a2;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)trim;

@end
