@class NSString, BDECIMClient, NSArray;
@protocol BDECIMCloudMessagesInConversationDataSourceInterface;

@interface BDECIMMessagesInConversationDataSource : NSObject

@property (retain, nonatomic) id<BDECIMCloudMessagesInConversationDataSourceInterface> messageDataSource;
@property (retain, nonatomic) BDECIMClient *client;
@property (retain, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSArray *currentMessageIDs;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (copy, nonatomic) id /* block */ messageDataSourceUpdated;
@property (copy, nonatomic) id /* block */ readMessageChangeCallback;

- (void)loadOlderMessagesWithCompletionBlock:(id /* block */)a0;
- (void)firstLoadOlderMessagesWithCompletionBlock:(id /* block */)a0;
- (void)onReadMessageChange:(id)a0;
- (id)initWithInitialLocationLatestMessageForConversationID:(id)a0 options:(id)a1 client:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
