@class NSString, AWEUserRecommendSearchView;
@protocol AWEFindFriendsSearchDelegate;

@interface AWEFindFriendsSearchCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEUserRecommendSearchView *searchView;
@property (copy, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<AWEFindFriendsSearchDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
