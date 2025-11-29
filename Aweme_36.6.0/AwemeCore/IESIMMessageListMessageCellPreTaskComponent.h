@class AWEIMMessagePretaskViewModel, NSString;

@interface IESIMMessageListMessageCellPreTaskComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction, AWEIMMessageTableViewAction>

@property (retain, nonatomic) AWEIMMessagePretaskViewModel *preTaskViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 cell:(id)a2;
- (void)msgList_viewDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
