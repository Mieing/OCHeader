@class AWEIMMessage, NSString;
@protocol AWEIMMessageListDataInterface, AWEIMMessageTableViewInterface;

@interface AWEIMMessageReadIndexComponent : AWEIMComponentBase <AWEIMMessageReadIndexInterface, AWEIMMessageListDataAction, AWEIMMessageTableViewAction, IESIMCellRealDisplayProxyAction>

@property (nonatomic) long long lastHasReadOrderIndex;
@property (nonatomic) long long lastestOrderIndex;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) long long lastMarkPullIndex;
@property (retain, nonatomic) AWEIMMessage *latestReadMessage;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterFirstScreenDataInitialize;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)conversation;

@end
