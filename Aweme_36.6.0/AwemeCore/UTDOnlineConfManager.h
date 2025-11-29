@class NSString, NSMutableArray, UTDPersistentFile;

@interface UTDOnlineConfManager : NSObject <UTMCLifeCycleProtocol> {
    NSMutableArray *mConfBusinessList;
    BOOL mIsStop;
    id mOptLock;
    NSString *mUTSyncConfTimeKeyStr;
    NSString *mUTConfFileName;
    UTDPersistentFile *mConfCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)getInstance;

- (id)localConfCacheForKey:(id)a0;
- (void)loadConfsFromFile;
- (void)syncOnlineconf;
- (void)updateConfEntryToCache:(id)a0 confEntry:(id)a1;
- (void)saveOnlineConf:(id)a0;
- (id)ogLocalCacheEntryForRequest;
- (id)responseConfigunPack:(id)a0;
- (void)dispatchSuccessConfs:(id)a0;
- (void)dispatchSyncFailNotify;
- (void)addConfBusiness:(id)a0;
- (void)removeConfBusiness:(id)a0;
- (void)saveAllConfigEntry;
- (id)calOnlineConf:(id)a0;
- (void)switchBackGround;
- (void)switchForeGround;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
