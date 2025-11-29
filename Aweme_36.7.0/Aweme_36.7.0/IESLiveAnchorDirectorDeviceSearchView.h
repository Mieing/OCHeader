@class UITableView, IESLiveAnchorDirectorDeviceLoadingView, NSString, DeviceViewListResponse_Data, UILabel, UIButton;
@protocol IESLiveAnchorDirectorDeviceSearchViewDelegate;

@interface IESLiveAnchorDirectorDeviceSearchView : UIView <UITableViewDataSource, UITableViewDelegate, IESLiveAnchorDirectorDeviceViewCellDelegate>

@property (retain, nonatomic) DeviceViewListResponse_Data *deviceViewData;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *explainButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) IESLiveAnchorDirectorDeviceLoadingView *loadingView;
@property (weak, nonatomic) id<IESLiveAnchorDirectorDeviceSearchViewDelegate> delegate;
@property (nonatomic) BOOL isFromToolBarItemClick;
@property (nonatomic) BOOL isFromControlPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDeviceViewData:(id)a0;
- (void)selectedDeviceViewInfo:(id)a0;
- (void)explainClick;
- (void)searchDevice;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;
- (id)initWithDeviceInfo:(id)a0;
- (void)showLoadingView;

@end
