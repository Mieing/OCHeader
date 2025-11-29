@class NSLock, NSMutableArray, NSMutableDictionary;

@interface ObjC_BlockHolder : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *msBundleArray;
@property (retain, nonatomic) NSMutableDictionary *sSPNCbMap;
@property BOOL isNotificationRegistered;

+ (id)shareInstance;

- (void)triggerCallback:(int)a0 key:(id)a1 withResult:(id)a2;
- (void)appDidEnterForeground:(id)a0;
- (void)collectFgbgdata:(int)a0 time:(unsigned long long)a1;
- (void)setMsBundleCallback:(id)a0 block:(id /* block */)a1;
- (int)setScenePageNameCallback:(int)a0 cb:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;

@end
