@class MMLRUCache, NSRecursiveLock;

@interface PendingMsgStorage : NSObject

@property (retain, nonatomic) MMLRUCache *cache;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)md5StringFromUserName:(id)a0;

- (id)init;
- (id)getAllInfos:(id)a0;
- (void)addInfo:(id)a0 chatName:(id)a1;
- (void)deleteInfo:(id)a0 msgLocalId:(unsigned int)a1;
- (void)deleteAllInfos:(id)a0;
- (id)_getAllInfos:(id)a0;
- (id)getPBPath:(id)a0;
- (void).cxx_destruct;

@end
