@class IESLiveScreencastLinkerSearchViewModel, NSArray, UIImageView, UICollectionView, UILabel, NSString;
@protocol IESLiveScreencastLinkerSearchAction;

@interface IESLiveScreencastLinkerSearchHistoryCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) IESLiveScreencastLinkerSearchViewModel *viewModel;
@property (copy, nonatomic) NSArray *historyArray;
@property (retain, nonatomic) id<IESLiveScreencastLinkerSearchAction> searchDispatcher;
@property (retain, nonatomic) UILabel *explanationLabel;
@property (retain, nonatomic) UILabel *cleanLabel;
@property (retain, nonatomic) UIImageView *deleteHistoryImage;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)calculateRowsForOptions:(id)a0;
+ (double)widthForText:(id)a0;

- (void)insteadCleanLabel;
- (void)cleanSearchHistory;
- (void)updateSearchHistoryArray:(id)a0 viewModel:(id)a1;
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
