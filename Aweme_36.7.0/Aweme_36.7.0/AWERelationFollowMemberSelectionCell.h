@class AWEIMUser, NSString, UIImageView, AWEUIListCellActionButton, UILabel, AWEUserNameLabel, MASConstraint;

@interface AWERelationFollowMemberSelectionCell : UITableViewCell <AWERelationFollowMemberSelectionProtocol>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEUserNameLabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (retain, nonatomic) MASConstraint *centerYConstraint;
@property (retain, nonatomic) UIImageView *verifiedLogoView;
@property (retain, nonatomic) AWEUIListCellActionButton *actionButton;
@property (nonatomic) double avatarW;
@property (nonatomic) double margin;
@property (nonatomic) double verificationIconW;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) UIImageView *verifiedImageView;
@property (copy, nonatomic) id /* block */ addButtonTapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__defaultAvatarImage;
+ (id)identifier;
+ (double)cellHeight;

- (void)actionBtnClicked;
- (void)changeToSelect:(BOOL)a0;
- (void)__setupUI;
- (void)updateTitleAndDescConstraints;
- (void)__makeConstraint;
- (void)__addHighlightToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)addButtonColorModel;
- (void)configWithUser:(id)a0 isSelected:(BOOL)a1 isSearching:(BOOL)a2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshUI;

@end
