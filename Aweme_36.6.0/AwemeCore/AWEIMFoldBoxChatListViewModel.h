@class NSArray, NSString;
@protocol IESIMConvBoxChatDataManagerProtocol, AWEIMFoldBoxChatListRefreshDelegate;

@interface AWEIMFoldBoxChatListViewModel : NSObject <AWEIMConvBoxChatDataManagerDelegate>

@property (retain, nonatomic) id<IESIMConvBoxChatDataManagerProtocol> dataManager;
@property (retain, nonatomic) NSArray *chatArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cellEntryType;
@property (weak, nonatomic) id<AWEIMFoldBoxChatListRefreshDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeChat:(id)a0 completion:(id /* block */)a1;
- (void)loadRemainingChatListWithCompletion:(id /* block */)a0;
- (void)didReloadChatList;
- (void)didReloadChat:(id)a0;
- (void)didRemoveChat:(id)a0;
- (void)didInsertChat:(id)a0;
- (void)__setupData;
- (void)refreshEntranceData;
- (void)notDisplayChat:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)unreadCount;

@end
