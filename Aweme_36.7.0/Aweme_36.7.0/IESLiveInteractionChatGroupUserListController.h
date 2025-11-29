@class NSArray, NSString, HTSLiveApi, NSDictionary, IESLiveInteractivePanelView, UITableView;

@interface IESLiveInteractionChatGroupUserListController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) IESLiveInteractivePanelView *containerView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderItems:(id)a0;
- (void)enterRoomWithID:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dismissWithCompletion:(id /* block */)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
