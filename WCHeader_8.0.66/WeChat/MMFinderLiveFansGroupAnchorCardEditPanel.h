@class NSString, MMFinderLiveSimpleSelectionSheetView, UIView, UITableView;
@protocol MMFinderLiveFansGroupAnchorCardEditPanelDelegate;

@interface MMFinderLiveFansGroupAnchorCardEditPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveSimpleSelectionSheetViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) MMFinderLiveSimpleSelectionSheetView *visibilitySelectionSheetView;
@property (nonatomic) unsigned long long currentVisibility;
@property (weak, nonatomic) id<MMFinderLiveFansGroupAnchorCardEditPanelDelegate> panelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setupPageSheetConfig;
- (id)genDoneButton;
- (double)contentWidth;
- (double)contentHeight;
- (void)createAllViews;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onDoneButtonClicked;
- (void)showVisibilitySelectionSheetView;
- (void)simpleSelectionSheetView:(id)a0 willCloseWithSelectedIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
