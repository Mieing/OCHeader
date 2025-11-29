@class UINavigationController, NSString, NSMutableArray, MMTableView;

@interface CLMHardlinkSessionView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *mainTableView;
@property (retain, nonatomic) NSMutableArray *chatLogInfoArray;
@property (retain, nonatomic) UINavigationController *navControl;
@property (retain, nonatomic) NSString *detailString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMultiChatLogInfo:(id)a0 fromNavControl:(id)a1;
- (void)makeTableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
