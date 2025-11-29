@class NSArray, NSDictionary, AWEIMStrangerBoxChatDataManager, NSString;
@protocol AWEIMStrangerChatListViewModelWeakVC, AWEIMStrangerChatListViewModelActionDelegate;

@interface AWEIMStrangerChatListBaseViewModel : NSObject <AWEIMStrangerChatListViewModelProtocol>

@property (weak, nonatomic) id<AWEIMStrangerChatListViewModelWeakVC> weakVC;
@property (weak, nonatomic) id<AWEIMStrangerChatListViewModelActionDelegate> actionDelegate;
@property (copy, nonatomic) NSArray *chatList;
@property (copy, nonatomic) NSDictionary *extDict;
@property (retain, nonatomic) AWEIMStrangerBoxChatDataManager *dataManager;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)conversationDataManager;
- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (id)trackerTabName;
- (BOOL)isTrashStrangerBox;
- (void)reloadChatPositionForDraft:(id)a0;
- (void)exitStrangerBoxAndClearStrangersConversation;
- (void)gotoProfileViewControllerWithChatModel:(id)a0;
- (void)configWithDataManager:(id)a0;
- (void)loadFirstPageWithCompletion:(id /* block */)a0;
- (void)gotoMessageListViewControllerWithChatModel:(id)a0 cellVM:(id)a1;
- (void)clearUserFlagIfNeeded;
- (void)removeAcquaintanceChat:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMore;

@end
