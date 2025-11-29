@class NSString, NSArray, MMScrollView, MMTableView;

@interface TemplateMsgRecvViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ITemplateMsgRecvExt> {
    NSString *_username;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    NSArray *_msgRecvState;
    BOOL _bStateChanged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUser:(id)a0;
- (void)viewDidLoad;
- (void)initEmptyView;
- (void)initTableView;
- (void)showSubView;
- (void)onRecvSwitchChanged:(id)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)onTemplateMsgRecvStateChangedForUser:(id)a0 withData:(id)a1;
- (void)onTemplateMsgConnectionChange:(unsigned int)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
