@class NSString, NSArray, UIImageView, UIImage, UICollectionView, UILabel, UIView;

@interface AWEScreenShootPanelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) UIImageView *screenShootImageView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *divideLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)screenShootPanelViewControllerWithImage:(id)a0 withDataArray:(id)a1;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setUpUI;

@end
