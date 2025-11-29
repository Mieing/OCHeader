@class NSArray, NSString, UICollectionView, UIView, NSIndexPath;

@interface AWEECOMIMEmoticonPackageView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *emoticonArr;
@property (copy, nonatomic) NSString *emoticonPackageName;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) BOOL itemShowBkgColor;
@property (nonatomic) BOOL hasSelected;
@property (weak, nonatomic) UIView *inputSuperView;
@property (copy, nonatomic) id /* block */ sendEmoticonPackage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEmoticonArr:(id)a0 emoticonPackageName:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)onLongPress:(id)a0;

@end
