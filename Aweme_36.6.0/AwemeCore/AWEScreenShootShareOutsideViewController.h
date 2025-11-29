@class NSArray, UICollectionView, NSString, AWEScreenShootShareViewModel, NSMutableArray;

@interface AWEScreenShootShareOutsideViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) AWEScreenShootShareViewModel *screenShootShareVM;
@property (retain, nonatomic) NSMutableArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareOutsidePanelViewController:(id)a0;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_titleForColoseButton;
- (id)collectionFromContentView:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)setUpCollectionView;
- (void)setUpUI;

@end
