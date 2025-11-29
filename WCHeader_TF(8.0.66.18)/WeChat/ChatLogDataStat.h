@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface ChatLogDataStat : NSObject <PBCoding>

@property (retain, nonatomic) NSRecursiveLock *markLock;
@property (retain, nonatomic) NSMutableDictionary *dicFileInfo;
@property (retain, nonatomic) NSMutableDictionary *dicSessionInfo;
@property (nonatomic) long long cacheVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicFileInfo;
+ (void)PBArrayAdd_dicSessionInfo;
+ (void)PBArrayAdd_cacheVersion;
+ (void)initialize;
+ (id)loadChatLogStatFromFile;
+ (BOOL)saveChatLogStat:(id)a0 isAll:(BOOL)a1;
+ (void)resetChatLogStat;

- (id)getPBPropertyTable;
- (id)init;
- (id)getSessionInfoForKey:(id)a0;
- (void)saveSessionInfo:(id)a0 withKey:(id)a1;
- (id)getObjectForKey:(id)a0;
- (void)saveObject:(id)a0 withKey:(id)a1;
- (id)convertSessionItemToInfo:(struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *x0; struct __shared_weak_count *x1; })convertSessionItemInfoToItem:(id)a0;
- (void).cxx_destruct;

@end
