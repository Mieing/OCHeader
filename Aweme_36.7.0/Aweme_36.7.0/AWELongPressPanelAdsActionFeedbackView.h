@class AWEAwemeModel, UIView, NSArray, NSString, AWELongPressAdsActionFlowLayout, UIButton, NSMutableArray, UICollectionView, AWELongPressPanelAdsInputView, UIScrollView;

@interface AWELongPressPanelAdsActionFeedbackView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWELongPressPanelAdsActionFeedbackProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *submitButton;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSArray *sectionArray;
@property (retain, nonatomic) NSMutableArray *selectedItems;
@property (retain, nonatomic) NSArray *subFilterItems;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELongPressAdsActionFlowLayout *flowLayout;
@property (retain, nonatomic) UIView *popoverView;
@property (retain, nonatomic) UICollectionView *popoverCollectionView;
@property (retain, nonatomic) AWELongPressPanelAdsInputView *adFullScreenInputView;
@property (nonatomic) long long inputViewSection;
@property (nonatomic) BOOL inputViewIsShowing;
@property (copy, nonatomic) NSString *inputContentString;
@property (retain, nonatomic) NSMutableArray *subSelectedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIScrollView *scrollView;

+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;

- (void)submitButtonClicked;
- (void)configData;
- (void)updateSubmitButtonTitle;
- (id)itemModelAtIndexPath:(id)a0;
- (id)handleSelectedItems;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (void)handlePanelDidDismiss:(id)a0;
- (void)likeWithMethodType:(unsigned long long)a0;
- (void)dislikeWithMethodType:(unsigned long long)a0;
- (double)popoverCellHeight;
- (void)loadFullScreenInputView;
- (void)loadPopoverViewWithSharpOffset:(double)a0 height:(double)a1;
- (id)initWithActionType:(unsigned long long)a0 model:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;
- (void)setupViews;

@end
