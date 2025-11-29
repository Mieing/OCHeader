@class NSString, UITableView;

@interface AWEIMChatListTableViewComponent : AWEIMComponentBase <AWEIMChatListTableViewInterface>

@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)chatListVC;
- (void)reloadDataChatList:(id)a0;
- (void)diffUpdateChatList:(id)a0;
- (void).cxx_destruct;

@end
