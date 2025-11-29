@class UIView, NSString, NSArray, AWEProfileEditFlowLocationSelectResult, AWEProfileLocationSegment, UIButton, AWEProfileEditFlowLocationViewModel, UILabel, AFDFadingEdgeTableView;

@interface AWEProfileEditFlowLocationDetailView : AWEProfileEditFlowView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) AFDFadingEdgeTableView *tableView;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEProfileEditFlowLocationSelectResult *selectedLocation;
@property (nonatomic) long long selectedCountryIndex;
@property (retain, nonatomic) AWEProfileLocationSegment *currentSegment;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) AWEProfileEditFlowLocationViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectedLocation:(id)a1 currentSegment:(id)a2;
- (BOOL)p_showsSelectedPosition;
- (void)p_clickBackButton:(id)a0;
- (void)p_refreshCurrentLocationCell:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
