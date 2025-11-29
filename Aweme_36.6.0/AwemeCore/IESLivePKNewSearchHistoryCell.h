@class NSArray, UIImageView, UICollectionView, UILabel, IESLivePKSearchViewModel, NSString;
@protocol IESLivePKSearchAction;

@interface IESLivePKNewSearchHistoryCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *historyArray;
@property (retain, nonatomic) UILabel *explanationLabel;
@property (retain, nonatomic) UILabel *cleanLabel;
@property (retain, nonatomic) UIImageView *deleteHistoryImage;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLivePKSearchViewModel *viewModel;
@property (retain, nonatomic) id<IESLivePKSearchAction> searchDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insteadCleanLabel;
- (void)cleanSearchHistory;
- (void)getSearchHistoryArray:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)widthForText:(id)a0;
- (void)layoutUI;
- (void)updateCollectionView;

@end
