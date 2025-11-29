@class NSString, NSObject;
@protocol OS_dispatch_queue, AWEIMMessageListComponentCenter;

@interface IESIMMessageListFirstFrameObserverComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction, AWEIMMessageListDataAction, AWEIMMessageListComponent>

@property (nonatomic) BOOL hasSetDidAppear;
@property (nonatomic) BOOL hasSetFirstReloadData;
@property (nonatomic) BOOL hasNotifyFirstFrame;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)vm_firstReloadDataTransactionCompleted;
- (void)componentDidMounted:(id)a0;
- (void)msgList_viewDidAppear;
- (void)msg_firstReloadDataTransactionCompleted;
- (void)msg_viewDidAppear;
- (void)p_tryNotifyFirstFrame;
- (void).cxx_destruct;
- (id)init;

@end
