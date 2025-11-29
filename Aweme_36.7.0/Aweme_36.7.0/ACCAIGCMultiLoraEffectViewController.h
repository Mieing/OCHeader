@class UILabel, ACCAIGCMultiLoraActionButton, NSDictionary, IESEffectModel, UICollectionView, NSMutableArray, ACCAIGCMultiLoraEffectViewControllerConfig, ACCAIGCMultiLoraInfoCollectionViewCellModel, NSString, AWEVideoPublishViewModel, NSArray, ACCGradientView, DUXIndentBanner;

@interface ACCAIGCMultiLoraEffectViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, ACCAIGCMultiLoraInfoCollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, DUXSheetDelegate>

@property (retain, nonatomic) ACCAIGCMultiLoraEffectViewControllerConfig *config;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSString *effectId;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) NSMutableArray *selectedLoras;
@property (retain, nonatomic) NSMutableArray *selectedDataSource;
@property (retain, nonatomic) ACCAIGCMultiLoraInfoCollectionViewCellModel *selectActionCellModel;
@property (retain, nonatomic) NSArray *multiPersonInfoSortedArray;
@property (retain, nonatomic) NSDictionary *multiPersonInfoDict;
@property (retain, nonatomic) NSMutableArray *carouselImages;
@property (retain, nonatomic) NSMutableArray *carouselImageUrls;
@property (retain, nonatomic) DUXIndentBanner *carouselView;
@property (retain, nonatomic) ACCGradientView *carouselViewbottomMaskView;
@property (retain, nonatomic) UILabel *rangeTipsLabel;
@property (retain, nonatomic) UILabel *makeTipsLabel;
@property (retain, nonatomic) ACCAIGCMultiLoraActionButton *makeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCGradientView *collectionViewTopMaskView;
@property (retain, nonatomic) ACCGradientView *collectionViewbottomMaskView;
@property (nonatomic) long long collectionViewLines;
@property (nonatomic) long long lastCollectionViewLines;
@property (nonatomic) BOOL shouldAnimateLayout;
@property (nonatomic) BOOL forbidAutoAddLora;
@property (nonatomic) long long minSelect;
@property (nonatomic) long long maxSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPageShow;
- (void)setupEffectInfo;
- (double)collectionViewHeightForLines:(unsigned long long)a0;
- (void)autoSelectWithLoraProfileModel:(id)a0;
- (void)addSelectedLoraDataWithSelectedLoras:(id)a0;
- (id)getLastLoraIds;
- (void)storeLastLoraIds:(id)a0;
- (void)refreshAfterDataChange;
- (double)collectionViewItemSpacing;
- (void)trackClickSelectProfile;
- (void)makeButtonClicked;
- (void)clickDeleteCell:(id)a0;
- (void)clickCell:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)updateViewConstraints;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
