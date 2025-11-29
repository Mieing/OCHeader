@class NSArray, NSPointerArray, AWEIMStrangerChatListViewControllerV2, NSString;
@protocol AWEIMStrangerChatListViewModelProtocol;

@interface AWEIMStrangerChatListDataSourceComponent : AWEIMComponentBase <AWEIMStrangerChatListViewModelWeakVC, AWEIMCommonChatListDataSourceInterface>

@property (retain, nonatomic) NSArray *chatArray;
@property (retain, nonatomic) NSPointerArray *weakObservers;
@property (weak, nonatomic) AWEIMStrangerChatListViewControllerV2 *hostVC;
@property (weak, nonatomic) id<AWEIMStrangerChatListViewModelProtocol> viewModel;
@property (nonatomic) BOOL hasMoreData;
@property (nonatomic) BOOL isPulling;
@property (nonatomic) BOOL didFetchedFirstPage;
@property (nonatomic) double tt;
@property (nonatomic) BOOL hasReload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreDataIfNeed;
- (void)startLoadData;
- (void)didReloadAllStrangerDataEnd;
- (void)didEndNotify;
- (id)chatForIndexPath:(id)a0;
- (void)broadcastDataChange;
- (void)didMergeReloadALLChatList;
- (void)didReloadALLChatList;
- (id)initWithHostVC:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)hasMore;
- (id)chatList;
- (void)dealloc;

@end
