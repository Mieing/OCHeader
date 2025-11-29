@class NSArray, AWEIMChatListViewController, AWEIMMessageTabAsyncLoadConfig, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue, IESIMUserService;

@interface AWEIMMessageTabAsyncLoadComponent : AWEIMComponentBase <IESIMMessageTabAsyncLoadProtocol, AWEUserMessage>

@property (class, readonly, nonatomic) AWEIMMessageTabAsyncLoadConfig *config;

@property (nonatomic) BOOL firstPullDataHasHandled;
@property (copy, nonatomic) id /* block */ pagedDataProcessedCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncLoadQueue;
@property (retain, nonatomic) NSMutableSet *asyncLoadSessionIDs;
@property (weak, nonatomic) id<IESIMUserService> userService;
@property (weak, nonatomic) AWEIMChatListViewController *chatListVC;
@property (nonatomic) BOOL waitingPagedData;
@property (copy, nonatomic) NSArray *newestChatList;
@property (nonatomic) long long loadMoreStage;
@property (nonatomic) BOOL hasTriggerReloadWhenFirstAppear;
@property (readonly, nonatomic) BOOL needBuildComponentWhenPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)invokeInAsyncQueue:(id /* block */)a0;
- (void)p_reset;
- (id)initWithChatListVM:(id)a0 scene:(id)a1 enableSnapshot:(BOOL)a2;
- (void)asyncLoadViewModelWithContext:(id)a0 resultCallback:(id /* block */)a1;
- (void)asyncLoadChatsWithContext:(id)a0 completion:(id /* block */)a1;
- (void)asyncLoadChats:(id)a0 completion:(id /* block */)a1;
- (void)waitForPagedDataLoadingFinished:(id /* block */)a0;
- (BOOL)chatListCanLoadMore;
- (void)onLoadMoreBegin;
- (void)onLoadMoreCallback;
- (void)didFinishLoadPagedChatList;
- (void)onReloadWhenFirstAppear;
- (void)saveSnapshotChats:(long long)a0;
- (BOOL)p_supportAsyncLoad;
- (void)onAsyncLoadEnd;
- (void)p_syncCallbackChatList:(id)a0 isLast:(BOOL)a1 triggerByPagedData:(BOOL)a2 resultCallback:(id /* block */)a3;
- (void)onAsyncLoadBegin;
- (void)p_handleFirstPullList:(id)a0 triggerByPagedData:(BOOL)a1 beginAt:(long long)a2 resultCallback:(id /* block */)a3;
- (void)p_asyncLoad:(id)a0 isLast:(BOOL)a1 triggerByPagedData:(BOOL)a2 resultCallback:(id /* block */)a3;
- (void)p_trackWaitResultWithCount:(unsigned long long)a0 duration:(long long)a1 needWaiting:(BOOL)a2;
- (long long)p_computeFirstScreenChatCount;
- (void).cxx_destruct;
- (void)dealloc;

@end
