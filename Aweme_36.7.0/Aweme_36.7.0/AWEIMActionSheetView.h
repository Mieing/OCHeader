@class NSArray, UICollectionView, NSString, UIView;

@interface AWEIMActionSheetView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESIMActionSheetViewProtocol>

@property (retain, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *seperateline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ itemTappedAction;

- (void)p_setupView;
- (id)initWithItemModels:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;

@end
