@class UIViewController, NSString, UIImageView, UILabel, AWEUserModel, UIButton;
@protocol AFDnewAccountRecommendListCellDelegate;

@interface AFDnewAccountRecommendListCell : UITableViewCell <AWEUserMessage>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) AWEUserModel *model;
@property (weak, nonatomic) UIViewController<AFDnewAccountRecommendListCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)configWithModel:(id)a0;
- (void)followBtnClicked;
- (void)refresh_followBtnWithStatus:(long long)a0;
- (void)updateWithFollowStatus:(long long)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;

@end
