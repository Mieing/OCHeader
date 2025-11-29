@class UIView, UILabel, WCFinderLocationViewModel, NSString, WCFinderMultiSelectSearchBar, UIButton, WCFinderLocationFooterView, WCFinderLocationReportModel, MMTableView, WCFinderCommonSearchBar;
@protocol WCFinderLocationViewControllerDelegate;

@interface WCFinderLocationViewController : MMPageSheetBaseViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, WCSearchDelegate, WCFinderLocationViewModelDelegate, UITextFieldDelegate, WCFinderMultiSelectSearchBarDelegate, WCFinderCommonSearchBarDelegate, MMImagePickerManagerDelegate, WCFinderLocationFooterViewDelegate, WCFinderLocationLbsTableViewCellDelegate, WCFinderLocationViewControllerDelegate, MMPageSheetProvider>

@property (retain, nonatomic) WCFinderLocationViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *rightBarBtn;
@property (retain, nonatomic) WCFinderCommonSearchBar *singleSearchBar;
@property (retain, nonatomic) WCFinderMultiSelectSearchBar *multiSearchBar;
@property (retain, nonatomic) MMTableView *poiTableView;
@property (retain, nonatomic) WCFinderLocationFooterView *listTableFooterView;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) WCFinderLocationReportModel *reportModel;
@property (weak, nonatomic) id<WCFinderLocationViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *postSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightRatio;

- (id)initWithFinderUsername:(id)a0 selectedLocation:(id)a1 materialLbsLocation:(id)a2 reportModel:(id)a3;
- (void)viewDidLoad;
- (void)triggerFetchPOILbsList;
- (unsigned long long)supportedInterfaceOrientations;
- (void)layoutAllSubviews;
- (void)_initHeaderView;
- (void)setUpView;
- (double)containerViewHeight;
- (void)_initTableView;
- (void)onClickCancelButton;
- (void)closeContainer;
- (void)onClickAcceptBtn;
- (id)getCurSearchTextField;
- (void)clearCurSearchTextField;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onViewModelDataReload;
- (void)textFieldDidEndEditing:(id)a0;
- (void)onCommonSearchBarTextFiledChanged:(id)a0;
- (void)onMultiSelectSearchItem:(id)a0;
- (void)onMultiSelectSearchTextFiledChanged:(id)a0;
- (void)registerYReportSdk;
- (void)configureSessionPageInOutReport;
- (id)genReportInfoDic;
- (void)onLocationFooterClickSubtitle:(id)a0;
- (void)showSelectGPSFromAssetPicker;
- (void)updateSearchAssetPOIInfo:(id)a0 selectAssetInfo:(id)a1;
- (void)_pushImagePickerAssetUrl:(id)a0 assetInfo:(id)a1;
- (void)dismissAllPresentedViewControllers;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onClickUploadGuideRowAction;
- (void)onClickMoreLbsInfoAction:(int)a0;
- (void)onLocationViewControllerClickSureLocation:(id)a0 searchWord:(id)a1 poiBusinessType:(int)a2;
- (void)willPopNotifyAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
