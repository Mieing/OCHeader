@class AWEHPHambMessageStorage, AWEHPHambMessageHandler, AWEHPHambMessageCache, NSLock, NSMutableArray;

@interface AWEHPHambMessageManager : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) AWEHPHambMessageCache *cache;
@property (retain, nonatomic) AWEHPHambMessageStorage *storageManager;
@property (retain, nonatomic) AWEHPHambMessageHandler *handler;

- (void)addNewMessageBlock:(id /* block */)a0;
- (void)reloadMessagesWithVersion:(long long)a0;
- (id)getAllMessages;
- (id)getMessagesFromIndex:(long long)a0;
- (id)p_generateCacheWithVersion:(long long)a0 messages:(id)a1;
- (void)insertNewMessage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
