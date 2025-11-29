@class NSString, UISwitch, WCLabsAppItem, UITableView;

@interface WCLabSettingDetailViewControllerNew : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCLabSettingDetailFooterViewDelegate, WCLabSettingDetailVisitWeAppCellDelegate, WCLabSettingDetailImagesCellDelegate> {
    WCLabsAppItem *_labItem;
    UITableView *_tableView;
}

@property (weak, nonatomic) UISwitch *labSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLabItem:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onClickExposeButton:(id)a0;
- (void)onClickVisisWeAppWithLabItem:(id)a0;
- (id)genFeedbackFromStr;
- (void)initTableView;
- (void).cxx_destruct;

@end
