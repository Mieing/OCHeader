@class NSString, NSArray, NSDictionary, AWEIMStrangerBoxChatDataManager;
@protocol AWEIMStrangerChatListViewModelWeakVC, AWEIMStrangerChatListViewModelActionDelegate;

@interface AWEIMStrangerTrashChatListViewModel : AWEIMStrangerChatListBaseViewModel <AWEIMStrangerBoxTrashChatDataManagerDelegate> {
    id<AWEIMStrangerChatListViewModelWeakVC> _weakVC;
    id<AWEIMStrangerChatListViewModelActionDelegate> _actionDelegate;
    NSArray *_chatList;
    NSDictionary *_extDict;
    AWEIMStrangerBoxChatDataManager *_dataManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)extDict;
- (void)setExtDict:(id)a0;
- (id)trackerTabName;
- (id)getBizInfo;
- (id)weakVC;
- (void)setWeakVC:(id)a0;
- (void)setChatList:(id)a0;
- (BOOL)isTrashStrangerBox;
- (void)didEndNotify;
- (void)didReloadTrashALLChatList:(id)a0 withExtDict:(id)a1;
- (void)didReloadTrashChatList:(id)a0 withExtDict:(id)a1;
- (void)didDeleteTrashChatList:(id)a0;
- (void)didInsertTrashChat:(id)a0 atIndex:(unsigned long long)a1 withExt:(id)a2;
- (void)exitStrangerBoxAndClearStrangersConversation;
- (void)configWithDataManager:(id)a0;
- (void)loadFirstPageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setDataManager:(id)a0;
- (id)actionDelegate;
- (BOOL)hasMore;
- (id)dataManager;
- (id)chatList;
- (void)setActionDelegate:(id)a0;

@end
