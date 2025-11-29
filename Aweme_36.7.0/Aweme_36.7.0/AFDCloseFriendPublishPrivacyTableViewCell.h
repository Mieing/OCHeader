@class AWEBinding, UIImageView, AFDCloseFriendsPrivacyOptionModel, UILabel, UIView, DUXCheckBox;

@interface AFDCloseFriendPublishPrivacyTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIImageView *relationArrowView;
@property (retain, nonatomic) DUXCheckBox *selectCheckBox;
@property (retain, nonatomic) AFDCloseFriendsPrivacyOptionModel *currentModel;
@property (retain, nonatomic) AWEBinding *selectedBinding;
@property (retain, nonatomic) AWEBinding *relationTextBinding;
@property (retain, nonatomic) UIView *lineView;

+ (id)reuseIdentifier;

- (void)updateSelected:(BOOL)a0;
- (void)relationLabelClicked;
- (void)updateRelationLabel;
- (void)updateWithPrivacyOptionModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
