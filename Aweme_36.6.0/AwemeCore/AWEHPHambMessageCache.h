@class NSLock, NSMutableArray;

@interface AWEHPHambMessageCache : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableArray *messages;

- (void)reloadMessagesWithVersion:(long long)a0;
- (id)getAllMessages;
- (id)p_generateSortMessages:(id)a0 version:(long long)a1;
- (BOOL)p_removeOldMessages:(id)a0 version:(long long)a1;
- (id)getMessagesFromIndex:(long long)a0;
- (long long)p_insertMessage:(id)a0 toMessages:(id)a1;
- (id)initWithVersion:(long long)a0 messages:(id)a1;
- (long long)insertMessage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
