@class MMTableView, NSString, WCBaseTextFieldItem, MMPickerView;

@interface MMExptDebugViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMPickerViewDelegate, IExptServiceExt> {
    MMTableView *_tableView;
    MMPickerView *m_pickerView;
    NSString *_selectedExptId;
    WCBaseTextFieldItem *m_inputExptId;
    WCBaseTextFieldItem *m_inputExptKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)onExptItemListChange;
- (void)initView;
- (void)onTapEmpty;
- (id)genTableHeaderView;
- (void)onClickReqAppExpt:(id)a0;
- (void)onClickReqReport:(id)a0;
- (void)onClickConfirmExptKey:(id)a0;
- (void)onClickConfirmExptId:(id)a0;
- (void)onClickSelectExpt:(id)a0;
- (void)onClickReqExpt:(id)a0;
- (void)onClickDelExpt:(id)a0;
- (id)sortedAllExpt;
- (void)MMPickerViewDidChooseRow:(long long)a0 atSession:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)genShowView:(id)a0;
- (void).cxx_destruct;

@end
