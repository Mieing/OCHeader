@class NSString, UIImageView, AWEAwemeModel, UILabel;

@interface AWEAdCustomHeaderWebViewUserFollowButton : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *followIcon;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ followedCompletion;
@property (copy, nonatomic) NSString *barType;

- (void)updateFollowStatus;
- (void)setupUIWithModel:(id)a0;
- (void)followUserIfNeed;
- (void)updateViewWithFollowedStatus;
- (void)updateViewWithUnFollowStatus;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
