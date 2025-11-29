@class NSString, UICollectionView, NSMutableSet, NSMutableArray;
@protocol AWEFollowListRecommendCardCellDelegate;

@interface AWEFollowListRecommendCardCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, AWEFollowListRecommendCardSingleCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *cardModels;
@property (retain, nonatomic) NSMutableSet *uids;
@property (weak, nonatomic) id<AWEFollowListRecommendCardCellDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterUserProfile:(long long)a0 enterfrom:(id)a1 enterScene:(long long)a2;
- (void)leftRemoveAnimation;
- (void)updateWithModelList:(id)a0;
- (void)didTapFollowButtonOnCell:(id)a0;
- (void)didTapDislikeButtonOnCell:(id)a0;
- (void)updateRecommendCardUIWithModelList:(id)a0;
- (void)resetUids;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
