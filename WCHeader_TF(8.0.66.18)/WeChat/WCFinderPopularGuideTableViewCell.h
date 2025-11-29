@class NSString, NSArray, UICollectionView, WCFinderFeedLayoutContentVM, UILabel, MMUIButton, UIButton;
@protocol WCFinderPopularGuideTableViewCellDelegate;

@interface WCFinderPopularGuideTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) UILabel *popularLabel;
@property (weak, nonatomic) MMUIButton *morePopularAction;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *contentArray;
@property (weak, nonatomic) UIButton *backgroundBtn;
@property (retain, nonatomic) WCFinderFeedLayoutContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderPopularGuideTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)awakeFromNib;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;
- (void)configureCollection;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)updateWithContentVM:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onClickAction;
- (void)onClickTipsAction;
- (void).cxx_destruct;

@end
