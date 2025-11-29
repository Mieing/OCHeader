@class NSString, NSArray, NSDictionary, AWEIMStrangerBoxChatDataManager;
@protocol AWEIMStrangerChatListViewModelWeakVC, AWEIMStrangerChatListViewModelActionDelegate;

@interface AWEIMStrangerChatListViewModel : AWEIMStrangerChatListBaseViewModel <AWEIMStrangerBoxChatDataManagerDelegate, AWEIMStrangerBlockMsgInteractorDataSource> {
    id<AWEIMStrangerChatListViewModelWeakVC> _weakVC;
    id<AWEIMStrangerChatListViewModelActionDelegate> _actionDelegate;
    NSArray *_chatList;
    NSDictionary *_extDict;
    AWEIMStrangerBoxChatDataManager *_dataManager;
}

@property (nonatomic) long long trueStrangerUnread;
@property (nonatomic) long long fakeStrangerUnread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)extDict;
- (void)setExtDict:(id)a0;
- (void)setupKVO;
- (id)trackerTabName;
- (id)getBizInfo;
- (id)weakVC;
- (void)setWeakVC:(id)a0;
- (void)strangerConversationCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (void)strangerMessageCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (void)setChatList:(id)a0;
- (void)didReloadAllStrangerDataEnd;
- (BOOL)isTrashStrangerBox;
- (void)fakeStrangerUnreadDidChange:(long long)a0;
- (void)didEndNotify;
- (void)didMergeReloadALLChatList:(id)a0 olderChatList:(id)a1 withExtDict:(id)a2;
- (void)didReloadChatList:(id)a0 withExtDict:(id)a1 scene:(unsigned long long)a2;
- (void)didDeleteChatList:(id)a0 scene:(unsigned long long)a1;
- (void)didInsertChat:(id)a0 atIndex:(unsigned long long)a1 withExt:(id)a2 scene:(unsigned long long)a3;
- (void)exitStrangerBoxAndClearStrangersConversation;
- (void)configWithDataManager:(id)a0;
- (void)loadFirstPageWithCompletion:(id /* block */)a0;
- (void)didReloadALLChatList:(id)a0 withExtDict:(id)a1 scene:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setDataManager:(id)a0;
- (id)actionDelegate;
- (BOOL)hasMore;
- (id)dataManager;
- (id)chatList;
- (void)setActionDelegate:(id)a0;

@end
