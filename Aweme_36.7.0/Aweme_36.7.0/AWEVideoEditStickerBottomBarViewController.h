@class UISelectionFeedbackGenerator, NSArray, UICollectionView, ACCStickerPannelUIConfig, NSString, NSIndexPath;
@protocol AWEVideoEditStickerBottomBarViewControllerDelegate;

@interface AWEVideoEditStickerBottomBarViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedback;
@property (retain, nonatomic) NSIndexPath *lastTouchedIndexPath;
@property (retain, nonatomic) NSIndexPath *lastTappedIndexPath;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) BOOL showText;
@property (weak, nonatomic) id<AWEVideoEditStickerBottomBarViewControllerDelegate> delegate;
@property (nonatomic) BOOL disableLeftScrollOutOfBounds;
@property (nonatomic) BOOL disableRightScrollOutOfBounds;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bottomBarHeight;
+ (double)collectionViewHeight;

- (void)selectCategory:(id)a0;
- (void)moveItemAtIndexPathToCenter:(id)a0;
- (void)tapEngineNotify;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (double)horizontalInset;
- (void)selectItemAtIndexPath:(id)a0;

@end
