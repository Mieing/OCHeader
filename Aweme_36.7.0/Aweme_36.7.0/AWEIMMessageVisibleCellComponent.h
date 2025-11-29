@class NSString;
@protocol AWEIMMessageTableViewInterface;

@interface AWEIMMessageVisibleCellComponent : AWEIMComponentBase <AWEIMMessageTableViewAction, AWEIMMessageVisibleCellInterface, IESIMCellRealDisplayProxyAction>

@property (nonatomic) long long currentMinGlobalIndex;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tableView:(id)a0 awe_partDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)currentVisibleCells;
- (void).cxx_destruct;
- (id)init;

@end
