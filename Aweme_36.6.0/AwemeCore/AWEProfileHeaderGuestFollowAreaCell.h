@class DUXButton;

@interface AWEProfileHeaderGuestFollowAreaCell : UICollectionViewCell

@property (retain, nonatomic) DUXButton *followButton;
@property (copy, nonatomic) id /* block */ iconProvider;
@property (nonatomic) long long followStatus;

- (void)didClickFollowButton;
- (void)updateWithFollowStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
