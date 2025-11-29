@class NSMutableDictionary;

@interface IESGurdChannelBlocklistManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *blocklistChannelDictionary;

+ (id)cachedBlocklist;
+ (id)dataWithPath:(id)a0;
+ (id)sharedManager;

- (BOOL)isBlocklistChannel:(id)a0 accessKey:(id)a1;
- (BOOL)needBlock:(id)a0;
- (void)syncBlocklist;
- (void)removeChannel:(id)a0 forAccessKey:(id)a1;
- (void)addChannel:(id)a0 forAccessKey:(id)a1 lastCleanTimestamp:(long long)a2;
- (long long)getLastCleanTimestamp:(id)a0 channel:(id)a1;
- (id)getBlockChannelStr:(id)a0;
- (unsigned long long)getBlocklistCount:(id)a0;
- (id)copyBlocklistChannel;
- (void).cxx_destruct;
- (void)cleanCache;

@end
