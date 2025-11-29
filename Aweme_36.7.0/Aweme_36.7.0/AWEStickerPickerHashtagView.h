@class NSArray, UICollectionView, NSString, UILabel;
@protocol AWEStickerPickerHashtagViewDelegate;

@interface AWEStickerPickerHashtagView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEStickerPickerHashtagViewDelegate> delegate;
@property (retain, nonatomic) NSArray *hashtagsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })p_titleLabelSizeWithTitle:(id)a0;
- (BOOL)enableTagWidthOpt;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupSubviews;

@end
