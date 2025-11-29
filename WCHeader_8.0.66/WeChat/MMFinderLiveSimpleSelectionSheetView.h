@class NSArray, NSString, UITableView;
@protocol MMFinderLiveSimpleSelectionSheetViewDelegate;

@interface MMFinderLiveSimpleSelectionSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) double showHeight;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveSimpleSelectionSheetViewDelegate> sheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 items:(id)a1 selectedIndex:(unsigned long long)a2;
- (void)dealloc;
- (void)setupPageSheetConfigWithTitle:(id)a0;
- (void)showWithHeight:(double)a0 animated:(BOOL)a1;
- (void)initUI;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)pageSheetWillDisappear;
- (void).cxx_destruct;

@end
