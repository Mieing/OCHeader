@class AWEUserRecommendSearchView;
@protocol AWEFindFriendsSearchDelegate;

@interface AWEInviteRecommendSearchTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEUserRecommendSearchView *searchView;
@property (weak, nonatomic) id<AWEFindFriendsSearchDelegate> delegate;

+ (id)identifier;
+ (double)suggestedHeight;

- (void)hideScanButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
