@class NSString, UIView, NSMutableArray, MMTableView;

@interface DataReportViewDebugInfoSheetView : MMPageSheetBaseViewController <UITableViewDataSource, UITableViewDelegate, MMPageSheetBottomViewDelegate>

@property (weak, nonatomic) UIView *debugView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *debugViewParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDebugView:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)initDebugInfo;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (long long)styleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void).cxx_destruct;

@end
