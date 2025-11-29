@class NSMutableDictionary;

@interface PendingMessageObject : NSObject

@property (retain, nonatomic) NSMutableDictionary *pendingMessagesDict;
@property (nonatomic) BOOL isPrepared;

- (id)init;
- (void)pendMessage:(id)a0 toReceiver:(id)a1;
- (id)getMessagesFromReceiver:(id)a0;
- (void)removeReceiver:(id)a0;
- (void).cxx_destruct;

@end
