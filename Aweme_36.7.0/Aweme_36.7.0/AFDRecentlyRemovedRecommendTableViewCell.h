@class AWEBinding, UIView, AWEUserRecommendBaseCellView, AWEUserModel;
@protocol AFDRecentlyRemovedRecommendDelegate;

@interface AFDRecentlyRemovedRecommendTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEUserRecommendBaseCellView *baseView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) AWEBinding *followStatusBinding;
@property (retain, nonatomic) AWEBinding *followerStatusBinding;
@property (retain, nonatomic) AWEUserModel *user;
@property (weak, nonatomic) id<AFDRecentlyRemovedRecommendDelegate> delegate;

+ (id)identifier;
+ (double)cellHeight;

- (void)configWithUser:(id)a0;
- (void)p_clickFollowButton:(id)a0;
- (void)refreshFollowStatusAnimated:(BOOL)a0;
- (void)updateCornersWithTop:(BOOL)a0 hasBottom:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
