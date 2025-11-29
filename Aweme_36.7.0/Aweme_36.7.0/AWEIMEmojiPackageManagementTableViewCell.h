@class MASConstraint, UIImageView, AWEIMmoticonThemeResponseModel, UILabel, UIView, UIButton;
@protocol AWEIMEmojiPackageManagementTableViewCellDelegate;

@interface AWEIMEmojiPackageManagementTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *customContentView;
@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) MASConstraint *deleteBtnLeading;
@property (retain, nonatomic) UIButton *fakeReorderControl;
@property (retain, nonatomic) AWEIMmoticonThemeResponseModel *emojiPackage;
@property (weak, nonatomic) id<AWEIMEmojiPackageManagementTableViewCellDelegate> delegate;

- (void)__setupUIs;
- (void)__renderPackageData;
- (BOOL)p_shouldArrowHidden;
- (void)__didClickDelete;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;

@end
