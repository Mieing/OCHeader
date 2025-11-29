@class AWEUserNameLabel, NSArray, UIImageView, AWEUIListCellActionButton, UILabel, MASConstraint, UIButton;

@interface AWEUIListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *acceptBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (retain, nonatomic) MASConstraint *centerYConstraint;
@property (nonatomic) BOOL isWhiteBG;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEUserNameLabel *userNameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *centerLabel;
@property (retain, nonatomic) UILabel *additionalLabel;
@property (retain, nonatomic) AWEUIListCellActionButton *actionButton;
@property (retain, nonatomic) UILabel *rightDescLabel;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) UILabel *roundDotLabel;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;
@property (copy, nonatomic) id /* block */ leftButtonClickedBlock;
@property (retain, nonatomic) NSArray *actionButtonTitles;
@property (nonatomic) BOOL shouldShowPlayIcon;

+ (double)cellIconImageWidthForCellType:(long long)a0;
+ (id)identifierForCellType:(long long)a0;
+ (double)cellHeightForCellType:(long long)a0;
+ (id)identifier;
+ (id)convertToString:(long long)a0;

- (void)setTitleAttributedText:(id)a0;
- (void)actionBtnClicked;
- (id)initWithCellType:(long long)a0 cellStyle:(long long)a1 reuseIdentifier:(id)a2;
- (void)configContentViewWithCellType:(long long)a0;
- (void)configRightText:(id)a0 rightImage:(id)a1;
- (void)configCancelButtonImage:(id)a0 acceptButtonImage:(id)a1;
- (id)attentionColorModel;
- (void)leftButtonClicked;
- (void)addVerificationIconWithName:(id)a0 shouldChangeLabel:(BOOL)a1;
- (id)initWithCellType:(long long)a0 cellStyle:(long long)a1 reuseIdentifier:(id)a2 isWhiteBG:(BOOL)a3;
- (void)configDotNumber:(id)a0;
- (void)configRightImage:(id)a0;
- (void)configWithRightButtonImage:(id)a0;
- (void)updateTitleAndDescConstraints;
- (void)updateThreeLineCellConstraints;
- (void)configVerificationImage:(id)a0 position:(long long)a1;
- (void)addVerificationIcon:(BOOL)a0;
- (void)configRightText:(id)a0;
- (void)setActionButtonTitles:(id)a0 withExtraWidth:(double)a1;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setTitleText:(id)a0;

@end
