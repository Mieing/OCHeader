@class NSArray, UICollectionView, NSString, UILabel, UICollectionViewFlowLayout, UIView;
@protocol AWEASMusicDiscoverSuggestionTableViewCellDelegate;

@interface AWEASMusicDiscoverSuggestionTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) NSArray *words;
@property (weak, nonatomic) id<AWEASMusicDiscoverSuggestionTableViewCellDelegate> delegate;
@property (nonatomic) BOOL isHideSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)didMoveToSuperview;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;

@end
