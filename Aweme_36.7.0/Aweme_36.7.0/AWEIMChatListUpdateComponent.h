@class NSArray, NSString, AWEIMChatListUpdateDebounceThrottle, NSDate, AWEIMUITaskQueue;
@protocol AWEIMChatListTableViewInterface;

@interface AWEIMChatListUpdateComponent : AWEIMComponentBase <AWEIMChatListUpdateInterface, AWEUserMessage>

@property (retain, nonatomic) AWEIMUITaskQueue *taskQueue;
@property (weak, nonatomic) id<AWEIMChatListTableViewInterface> chatListService;
@property (retain, nonatomic) AWEIMChatListUpdateDebounceThrottle *updateDebounceThrottle;
@property (retain, nonatomic) NSDate *firstShowChatListDate;
@property (copy, nonatomic) NSArray *chatList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)enqueueReloadDataTask:(id /* block */)a0;
- (void)enqueueDiffUpdateTask:(id /* block */)a0;
- (void)cancelAllUITasks;
- (void)tryUpdateChatList:(id)a0;
- (id)mergeIDForTableView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
