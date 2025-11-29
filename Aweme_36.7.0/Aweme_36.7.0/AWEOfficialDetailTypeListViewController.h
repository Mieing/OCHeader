@class UIView, NSString, NSArray, UIImageView, NSMutableDictionary, CAGradientLayer, UICollectionView, NSMutableSet;
@protocol AWEOfficialDetailTypeListViewControllerDelegate;

@interface AWEOfficialDetailTypeListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UICollectionView *horizontalTypeListCollectionView;
@property (retain, nonatomic) UIView *filterContainerView;
@property (retain, nonatomic) UIImageView *filterImageView;
@property (retain, nonatomic) UIView *filterGradientView;
@property (retain, nonatomic) UICollectionView *filterTypeListCollectionView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) long long currentSelectIndex;
@property (copy, nonatomic) NSArray *noticeTypeList;
@property (retain, nonatomic) NSMutableSet *displayCellIDSet;
@property (retain, nonatomic) NSMutableDictionary *dotStartTimeDict;
@property (weak, nonatomic) id<AWEOfficialDetailTypeListViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *horizontalTypeListContainerView;
@property (retain, nonatomic) UIView *filterTypeListContainerView;
@property (retain, nonatomic) UIView *filterTypeCollectionViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBackgroundColorWithExp;
+ (double)verticalMargin;

- (double)containerViewHeight;
- (void)didThemeChanged;
- (double)filterCollectionViewHeight;
- (void)configWithTypeItemList:(id)a0 currentSelectIndex:(long long)a1;
- (void)p_trackMessageBoxPanelShow;
- (void)p_trackMessageBoxShowWithIndex:(long long)a0;
- (void)p_recordUnreadDotTimeWithIndex:(long long)a0;
- (void)p_trackMessageBoxClickWithIndex:(long long)a0;
- (void)p_trackMessageBoxPanelClickWithIndex:(long long)a0;
- (void)p_triggerHideFilterPanel:(id)a0;
- (void)p_triggerShowFilterPanel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
