@class NSString, AWEIMStrangerChatListViewControllerV2;

@interface AWEIMStrangerChatListCellSwipeComponent : AWEIMComponentBase <AWEIMCommonChatListCellSwipeInterface, AWEIMComponentLazyCreate>

@property (weak, nonatomic) AWEIMStrangerChatListViewControllerV2 *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (id)tableView:(id)a0 editActionsForItemAtIndexPath:(id)a1 forOrientation:(long long)a2 chat:(id)a3;
- (id)tableView:(id)a0 editActionsOptionsForItemAtIndexPath:(id)a1 forOrientation:(long long)a2 chat:(id)a3;
- (void)tableView:(id)a0 willBeginEditingItemAtIndexPath:(id)a1 forOrientation:(long long)a2 chat:(id)a3;
- (void)tableView:(id)a0 didEndEditingRowAtAtIndexPath:(id)a1 forOrientation:(long long)a2 chat:(id)a3;
- (BOOL)tableView:(id)a0 canBeginEditingRowAtIndexPath:(id)a1 forOrientation:(long long)a2 forGesture:(id)a3 chat:(id)a4;
- (id)p_productSwipeActionsForRowAtIndexPath:(id)a0 forOrientation:(long long)a1 chat:(id)a2;
- (id)p_productDeleteActionForRowAtIndexPath:(id)a0;
- (id)p_productReportActionForRowAtIndexPath:(id)a0;
- (id)p_productBlockActionForRowAtIndexPath:(id)a0;
- (void)p_deleteChat:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
