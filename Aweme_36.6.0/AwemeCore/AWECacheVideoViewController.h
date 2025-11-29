@class NSString, NSArray, AWEListDataController, UIButton, DUXRadioBox, DUXButton, UILabel, AWECacheVideoListView;
@protocol AWEMixCacheVideoSourceChangeDelegate, AWECacheVideoViewControllerConfigProtocol;

@interface AWECacheVideoViewController : UIViewController <AWECacheVideoListViewDelegate>

@property (retain, nonatomic) AWEListDataController *dataController;
@property (weak, nonatomic) id<AWEMixCacheVideoSourceChangeDelegate> delegate;
@property (retain, nonatomic) AWECacheVideoListView *listView;
@property (retain, nonatomic) DUXRadioBox *selectAllRadioBox;
@property (retain, nonatomic) UIButton *cacheButton;
@property (retain, nonatomic) DUXButton *cancelButton;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (copy, nonatomic) NSArray *selectAwemeModels;
@property (retain, nonatomic) id<AWECacheVideoViewControllerConfigProtocol> config;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectAwemeModelsDataChanged:(id)a0;
- (void)setupInitialData;
- (void)updateBottomTipView;
- (void)updateRatioBoxStatus;
- (void)selectAllButtonTapped;
- (void)cacheButtonTapped;
- (void)cacheVideoListDataChanged;
- (id)initWithDataController:(id)a0 enterFrom:(id)a1 config:(id)a2;
- (id)selectAllButton;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (Class)cellClass;
- (void)setupUI;

@end
