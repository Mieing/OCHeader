@class NSString, NSArray, UIImageView, CAShapeLayer, ACCEditTagsPOISearchType, NSMutableArray, ACCEditTagsPOISearchTypeSelectionView, UILabel;
@protocol ACCPOIServiceProtocol;

@interface ACCTagsPOIPickerViewController : ACCTagsItemPickerViewController <ACCEditTagsPOISearchTypeSelectionViewDelegate>

@property (retain, nonatomic) NSMutableArray *poiList;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *searchTypeLabel;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) ACCEditTagsPOISearchType *currentSearchType;
@property (retain, nonatomic) ACCEditTagsPOISearchTypeSelectionView *searchTypeSelectionView;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) NSArray *searchTypes;
@property (retain, nonatomic) id<ACCPOIServiceProtocol> poiService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecommendData;
- (void)searchWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)tagTypeString;
- (id)tagModelForIndexPath:(id)a0;
- (id)emptyResultText;
- (id)searchBarPlaceHolder;
- (void)restoreRecommendData;
- (id)itemTrackerParamsForItemAtIndexPath:(id)a0 isSelect:(BOOL)a1;
- (void)searchTypeSelectionViewWillDismiss:(id)a0;
- (void)searchTypeSelectionView:(id)a0 didSelectSearchType:(id)a1;
- (id)searchBarLeftView;
- (void)setupSearchTypePicker;
- (void)handleSelectionViewWillDismiss;
- (void)showSearchTypePicker;
- (BOOL)enableOverSea;
- (void).cxx_destruct;
- (id)dataSource;
- (long long)type;
- (double)headerHeight;
- (void)viewDidLoad;
- (id)headerText;
- (void)setLoadStatus:(long long)a0;
- (Class)cellClass;
- (id)itemTitle;
- (long long)indexOfItem:(id)a0;
- (id)cellIdentifier;
- (double)cellHeight;

@end
