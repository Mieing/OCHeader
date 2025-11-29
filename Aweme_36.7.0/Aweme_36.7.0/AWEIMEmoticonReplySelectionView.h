@class NSArray, NSString, UICollectionView;

@interface AWEIMEmoticonReplySelectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataList;
@property (copy, nonatomic) id /* block */ didSelectViewModel;
@property (copy, nonatomic) id /* block */ enableSelectEmojiItem;
@property (copy, nonatomic) id /* block */ beginHoverCell;
@property (copy, nonatomic) id /* block */ cancelHoverCell;
@property (copy, nonatomic) id /* block */ endHoverCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
