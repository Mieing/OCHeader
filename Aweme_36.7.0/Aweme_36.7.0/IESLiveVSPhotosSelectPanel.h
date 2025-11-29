@class NSIndexPath, NSArray, UICollectionView, NSString, UILabel, UIView, UIButton;

@interface IESLiveVSPhotosSelectPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSIndexPath *selectedIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePanel;
- (double)celLength;
- (id)initWithPhotos:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (double)panelWidth;

@end
