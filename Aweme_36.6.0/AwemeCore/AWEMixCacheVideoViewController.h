@class AWEAwemeModel, UIView, NSArray, NSString, AWEListDataController, UIButton, AWEMixVideoModel, DUXRadioBox, UILabel;
@protocol AWEMixVideoListDataControllerProtocol, AWEMixCacheVideoSourceChangeDelegate, AWEMixDetailInformationListViewProtocol;

@interface AWEMixCacheVideoViewController : UIViewController <AWEMixVideoDetailInformationViewDelegate, AWEMixCacheVideoViewControllerProtocol>

@property (retain, nonatomic) AWEMixVideoModel *mixModel;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoListDataControllerProtocol> *dataController;
@property (weak, nonatomic) id<AWEMixCacheVideoSourceChangeDelegate> delegate;
@property (retain, nonatomic) UIView<AWEMixDetailInformationListViewProtocol> *listView;
@property (retain, nonatomic) DUXRadioBox *selectAllRadioBox;
@property (retain, nonatomic) UIButton *cacheButton;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (copy, nonatomic) NSArray *selectAwemeModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mixVideoListDataChanged;
- (void)selectAwemeModelsDataChanged:(id)a0;
- (void)setupInitialData;
- (id)initWithModel:(id)a0 dataController:(id)a1 delegate:(id)a2 currentAwemeModel:(id)a3;
- (void)updateBottomTipView;
- (void)updateRatioBoxStatus;
- (void)selectAllButtonTapped;
- (void)cacheButtonTapped;
- (id)initWithModel:(id)a0 dataController:(id)a1 delegate:(id)a2;
- (id)selectAllButton;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)viewDidLoad;
- (void)setupUI;

@end
