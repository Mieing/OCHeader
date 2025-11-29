@class NSString, NSMutableArray;
@protocol AWEIMMessageListDataInterface;

@interface IESIMAppearedCanPlayMessageRecordComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction, AWEIMMessageTableViewAction>

@property (retain, nonatomic) NSMutableArray *appearedCanPlayMessage;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 cell:(id)a2;
- (void)msgList_viewDidLoad:(id)a0;
- (void)msgList_viewWillDisappear;
- (void).cxx_destruct;

@end
