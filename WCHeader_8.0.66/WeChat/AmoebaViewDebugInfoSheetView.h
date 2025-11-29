@class NSString, UIView, NSMutableArray, UITableView;

@interface AmoebaViewDebugInfoSheetView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *debugViewParams;
@property (weak, nonatomic) UIView *debugView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initView:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)initDebugInfo;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)show;
- (void)hide;
- (void).cxx_destruct;

@end
