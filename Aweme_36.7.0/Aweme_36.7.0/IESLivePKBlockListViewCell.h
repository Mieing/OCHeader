@class UIImageView, UILabel, UIView, UIButton;

@interface IESLivePKBlockListViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *avatarDecorateView;
@property (retain, nonatomic) UIView *livingAnimationView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *removeTimeLabel;
@property (retain, nonatomic) UIImageView *genderView;
@property (retain, nonatomic) UIButton *removeButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) long long blockType;
@property (copy, nonatomic) id /* block */ removeBlock;

- (void)addSubviews;
- (void)didClickRemoveButton;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
