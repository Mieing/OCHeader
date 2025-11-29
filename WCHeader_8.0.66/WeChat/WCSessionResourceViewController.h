@class StorageFootPanelView, NSString, ResourceBrowseCollectionView, NSMutableArray;

@interface WCSessionResourceViewController : MMUIViewController <StorageFootPanelViewDelegate, ResourceBrowseCollectionViewDelegate, IChatLogDataMgrExt>

@property (retain, nonatomic) NSMutableArray *sessionMsgInfos;
@property (retain, nonatomic) ResourceBrowseCollectionView *sessionBrowseView;
@property (retain, nonatomic) StorageFootPanelView *footPanelView;
@property (nonatomic) unsigned long long selectType;
@property (copy, nonatomic) id /* block */ comletionHandler;
@property (nonatomic) BOOL isSend;
@property (retain, nonatomic) NSMutableArray *lastSelectChatLogInfo;
@property (nonatomic) BOOL bUserAllSelect;
@property (readonly, nonatomic) NSString *filterReportSortSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (id)initWithSessionName:(id)a0 msgInfo:(id)a1;
- (id)initWithSessionName:(id)a0 msgInfo:(id)a1 withCompletion:(id /* block */)a2 isSend:(BOOL)a3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupView;
- (void)updateView;
- (id)getFootPanelSelectButtonTitle;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelLabelText;
- (id)getFootPanelSizeText;
- (void)onFootPanelSelectButtonClick;
- (void)p_deleteTheSelectedData;
- (void)onFootPanelDeleteButtonClick;
- (void)onFootPanelSelectAllButtonClick;
- (BOOL)isFootPanelRelateDataSelectAll;
- (BOOL)isFootPanelRelateDataLoading;
- (BOOL)isFootPanelRelateDataSelectEmpty;
- (void)onResourceBrowseCollectionViewSelectChange:(id)a0;
- (id)onResourceBrowseCollectionViewGetParentUIViewController;
- (BOOL)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
- (void)willMoveToParentViewController:(id)a0;
- (void)onChatLogDataReloadItem;
- (void).cxx_destruct;

@end
