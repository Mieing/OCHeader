@class NSArray, NSString;

@interface AWESearchAIGCPopover : UIView <UICollectionViewDelegate, UICollectionViewDataSource, DUXPopoverContent>

@property (copy, nonatomic) NSArray *data;
@property (nonatomic) BOOL ignoreDarkMode;
@property (copy, nonatomic) id /* block */ contentSizeBlock;
@property (copy, nonatomic) id /* block */ dataBlock;
@property (copy, nonatomic) id /* block */ selectItemBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ignoreDarkMode:(BOOL)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupSubviews;
- (void)setupData;

@end
