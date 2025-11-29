@class NSString, AWEMixCollectedUserModel, UIImageView, AWEMixVideoCollectionListModel, UIView, UILabel, DUXButton;

@interface AWEMixVideoCollectionListCell : UITableViewCell <AWEUserMessage>

@property (retain, nonatomic) AWEMixVideoCollectionListModel *cellModel;
@property (retain, nonatomic) UIView *authorInfoView;
@property (retain, nonatomic) AWEMixCollectedUserModel *userModel;
@property (retain, nonatomic) UIView *highlightBackgroundView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *followButton;
@property (copy, nonatomic) id /* block */ followButtonHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)highlightWithColor:(id)a0;
- (void)refreshFollowButtonWithModel:(id)a0;
- (double)getFollowBtnWidth;
- (void)followButtonTapped;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)configureWithModel:(id)a0;
- (void)configureSubviews;

@end
