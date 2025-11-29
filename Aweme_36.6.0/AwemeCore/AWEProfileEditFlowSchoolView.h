@class AFDFadingEdgeTableView, NSString, UITextField, UIImageView, UILabel, AWEUILoadingView, UIButton;

@interface AWEProfileEditFlowSchoolView : AWEProfileEditFlowStepView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITextField *searchField;
@property (retain, nonatomic) AFDFadingEdgeTableView *tableView;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIImageView *warningImageView;
@property (retain, nonatomic) UILabel *warningLabel;
@property (retain, nonatomic) UILabel *emptyHintTitleLabel;
@property (retain, nonatomic) UILabel *emptyHintSubtitleLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL warningHidden;
@property (nonatomic) BOOL wasSearching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)p_tableViewHeight;
- (void)p_tapClearButton:(id)a0;
- (BOOL)p_searching;
- (void)setWarningHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)p_updateOverallUI;
- (void)p_updateTableViewUI;
- (void)p_searchFieldEditingChanged:(id)a0;
- (BOOL)p_hasNearbySchools;
- (id)p_schoolAtIndexPath:(id)a0;
- (long long)p_currentTableViewStatus;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)keyboardWillChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
