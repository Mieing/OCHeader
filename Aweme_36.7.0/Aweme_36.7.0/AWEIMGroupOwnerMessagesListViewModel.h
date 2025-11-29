@class AWEIMMessageConversation, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol AWEIMGroupOwnerMessagesListViewModelDelegate, IESIMMessageDataManagerProtocol;

@interface AWEIMGroupOwnerMessagesListViewModel : NSObject <AWEIMFeedVideoMsgUnavailableStatusUpdatesObserver>

@property (copy) NSArray *messages;
@property BOOL hasMore;
@property (nonatomic) long long nextOffset;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) id<IESIMMessageDataManagerProtocol> messageDataManager;
@property (retain, nonatomic) NSMutableSet *messageIdSet;
@property (retain, nonatomic) NSMutableDictionary *messageId2CellIndex;
@property (weak) id<AWEIMGroupOwnerMessagesListViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)didUpdateUnavailableStatusForMessage:(id)a0;
- (void)didUpdateContentTitleForMessage:(id)a0 itemID:(id)a1;
- (void)didEditContentTitleForMessage:(id)a0;
- (void)fetchMessagesListWithCompletion:(id /* block */)a0;
- (id)__cellVMsFromttMsgs:(id)a0;
- (void)__appendToDataSourcesWithVMs:(id)a0;
- (id)__timeTextFromMessage:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)dealloc;
- (id)initWithConversation:(id)a0;

@end
