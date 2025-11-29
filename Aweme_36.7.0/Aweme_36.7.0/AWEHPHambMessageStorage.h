@class NSLock, MMKV;

@interface AWEHPHambMessageStorage : NSObject

@property (nonatomic) long long version;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) MMKV *mmkv;

- (void)reloadMessagesWithVersion:(long long)a0;
- (id)readMessages;
- (BOOL)writeMessage:(id)a0 error:(id *)a1;
- (long long)p_readVersionFromStorage;
- (void)p_reloadMessagesWithVersion:(long long)a0 needWriteFile:(BOOL)a1;
- (BOOL)p_checkMsgKey:(id)a0;
- (long long)p_getVersionFromMsgKey:(id)a0;
- (id)p_getMsgKeyWithVersion:(long long)a0;
- (BOOL)p_writeInfoToStorageWithVersion:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)getVersion;

@end
