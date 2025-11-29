@class IESLiveRevenueInteractVoteThemeViewModel, NSString, UICollectionView, IESLiveImageView, UILabel, UIView, UIButton;
@protocol IESLiveSubscription;

@interface IESLiveRevenueInteractVoteOpenViewController : IESLiveRevenueInteractPopupViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) IESLiveRevenueInteractVoteThemeViewModel *viewModel;
@property (retain, nonatomic) UIView *themeAreaView;
@property (retain, nonatomic) UILabel *themeTitleLabel;
@property (retain, nonatomic) UILabel *themeSubTitleLabel;
@property (retain, nonatomic) UILabel *themeChooseLabel;
@property (retain, nonatomic) IESLiveImageView *themeChooseImageView;
@property (retain, nonatomic) UIView *timeAreaView;
@property (retain, nonatomic) UILabel *timeTitleLabel;
@property (retain, nonatomic) UICollectionView *timeChooseCollectionView;
@property (retain, nonatomic) UIView *divisionLineView;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *startButton;
@property (nonatomic) long long fromSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickSaveButton;
- (void)onSetupNavBar:(id)a0;
- (id)initWithViewModel:(id)a0 fromSource:(long long)a1 diContext:(id)a2;
- (void)didClickChooseThemeArea;
- (void)didClickStartButton;
- (void)saveVoteData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupData;

@end
