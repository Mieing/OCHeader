@class NSString;
@protocol AWEIMMessageListDataInterface, IESIMMessageListUITaskService;

@interface AWEIMConversationTargetMessageOperationComponent : AWEIMComponentBase <AWEIMConversationTargetMessageOperationProtocol>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (retain, nonatomic) NSString *anchorMessageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)scrollToTargetMessage:(id /* block */)a0;
- (void)scrollMessageListToBottom;
- (void).cxx_destruct;

@end
