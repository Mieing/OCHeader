@class NSString, RichTextView, UITableView;

@interface WCFinderLimitedModeConfigViewController : MMLimitedModeConfigViewController <UITableViewDelegate, UITableViewDataSource, MMActionSheetDatePickerDelegate, WCFinderLimitedContentActionSheetDelegate>

@property (retain, nonatomic) RichTextView *contentTitleLabel;
@property (retain, nonatomic) UITableView *contentTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)willDisappear;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onClickBirthDatePicker;
- (void)onClickChooseCategoryPicker;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)getTableViewHeader;
- (id)getTipsTableViewHeader;
- (void)onClickDetailBtn;
- (void)datePickerCancel:(id)a0;
- (void)datePickerConfirm:(id)a0;
- (void)limitedContentClickConfirmAsSelectedModelArray:(id)a0;
- (void).cxx_destruct;

@end
