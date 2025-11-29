@class NSString, CMessageWrap, NSMutableArray, MMTableView;

@interface ShareTo3rdAppSettingViewController : MMUIViewController <ShareTo3rdAppManageCellDelegate, UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    NSMutableArray *_arrSortedAppinfo;
    BOOL _bHasEdit;
}

@property (retain, nonatomic) CMessageWrap *m_oMessageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)OnCancelModalView:(id)a0;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)onSwitchChange:(BOOL)a0 withAppInfo:(id)a1;
- (void).cxx_destruct;

@end
