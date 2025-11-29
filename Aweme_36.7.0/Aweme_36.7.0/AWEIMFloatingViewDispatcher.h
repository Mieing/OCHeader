@class NSMutableArray;
@protocol IESIMMessageContainerViewControllerProtocol;

@interface AWEIMFloatingViewDispatcher : AWEIMPriorityQueueSyncDispatcher

@property (retain, nonatomic) NSMutableArray *retryArr;
@property (weak, nonatomic) id<IESIMMessageContainerViewControllerProtocol> messageContainerViewController;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)preRemoveEnable:(id)a0;
- (id)preContinueEnable:(id)a0;
- (void).cxx_destruct;
- (void)retry;

@end
