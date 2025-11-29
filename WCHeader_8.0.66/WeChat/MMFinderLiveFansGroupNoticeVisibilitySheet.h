@class NSArray, MMFinderLiveFansGroupAnchorEditFansNoticeInfo, NSString, MMFinderLivePickerView, MMTableView;
@protocol MMFinderLiveFansGroupNoticeVisibilitySheetDelegate;

@interface MMFinderLiveFansGroupNoticeVisibilitySheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLivePickerViewDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSArray *itemArray;
@property (retain, nonatomic) MMFinderLiveFansGroupAnchorEditFansNoticeInfo *info;
@property (retain, nonatomic) MMFinderLiveFansGroupAnchorEditFansNoticeInfo *editedInfo;
@property (weak, nonatomic) MMFinderLivePickerView *pickerView;
@property (weak, nonatomic) id<MMFinderLiveFansGroupNoticeVisibilitySheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)initViews;
- (double)getContentHeight;
- (double)getPanelContentHeight;
- (double)getMaxPanelHeight;
- (void)initPageSheetConfig;
- (id)getBackButton;
- (id)getConfirmButton;
- (void)pageSheetWillDisappear;
- (void)initData;
- (id)levelStringWithLevel:(unsigned int)a0;
- (void)openPickerView;
- (void)pickerViewWillDissmiss:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(unsigned long long)a1;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (BOOL)superfanEnabled;
- (void).cxx_destruct;

@end
