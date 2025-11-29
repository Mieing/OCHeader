@class WAMediaCastingRoutePickerDeviceItem, WAMediaCastingRoutePickerViewModel, MMUILabel, NSString, WAMediaCastingRoutePickerTableHeaderView, MMUIButton, UITableView;
@protocol WAMediaCastingRoutePickerViewDelegate;

@interface WAMediaCastingRoutePickerView : WAMediaCastingPageSheet <WAMediaCastingRoutePickerViewModelDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) WAMediaCastingRoutePickerViewModel *viewModel;
@property (retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *selectedDevice;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *guideButton;
@property (retain, nonatomic) WAMediaCastingRoutePickerTableHeaderView *recentlyHeader;
@property (retain, nonatomic) WAMediaCastingRoutePickerTableHeaderView *availableHeader;
@property (weak, nonatomic) id<WAMediaCastingRoutePickerViewDelegate> pickerViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)loadAllSubviews;
- (void)setupViewModel:(id)a0;
- (void)addSubviews:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (BOOL)cornerRaduis;
- (struct CGPoint { double x0; double x1; })containerPoint;
- (struct CGPoint { double x0; double x1; })containerShowAnimationStartPoint;
- (struct CGPoint { double x0; double x1; })containerDismissAnimationEndPoint;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)notifySelected:(id)a0;
- (void)onMediaCastingRoutePickerViewModelDeviceListChanged:(id)a0;
- (void)onMediaCastingRoutePickerViewModelSearchingStatusChanged:(id)a0;
- (void)onMediaCastingRoutePickerViewModelCurrentDeviceStatusChanged:(id)a0;
- (BOOL)curOrientationIsLandscape;
- (void)handleSearchingStatusChanged:(BOOL)a0;
- (void)handleCurrentDeviceStatusChanged:(unsigned long long)a0;
- (void)onClickCloseButton:(id)a0;
- (void)onClickGuideButton:(id)a0;
- (void).cxx_destruct;

@end
