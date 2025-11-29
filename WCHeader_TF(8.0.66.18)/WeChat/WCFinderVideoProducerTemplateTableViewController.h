@class NSString, UICollectionView, WCFinderVideoProducerDataSource, NSIndexPath;
@protocol WCFinderVideoProducerTemplateTableDelegate;

@interface WCFinderVideoProducerTemplateTableViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    struct CGSize { double width; double height; } _size;
    NSIndexPath *_focusedIndex;
    long long _originSection;
}

@property (retain, nonatomic) WCFinderVideoProducerDataSource *cellVMData;
@property (retain, nonatomic) UICollectionView *templateCollectionView;
@property (weak, nonatomic) id<WCFinderVideoProducerTemplateTableDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)showWithTemplateData:(id)a0 fromSection:(long long)a1;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (long long)overrideUserInterfaceStyle;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)onTemplateAtIndex:(id)a0 changedFocusTo:(BOOL)a1;
- (void)initView;
- (void).cxx_destruct;

@end
