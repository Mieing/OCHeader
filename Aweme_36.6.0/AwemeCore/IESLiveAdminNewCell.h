@class HTSLiveUser, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveAdminstratorListNewCellDelegate;

@interface IESLiveAdminNewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) UIImageView *pendantImage;
@property (retain, nonatomic) UIImageView *honorView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) HTSLiveUser *userModel;
@property (nonatomic) double lastClickTime;
@property (weak, nonatomic) id<IESLiveAdminstratorListNewCellDelegate> delegate;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *settingBtn;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *lowerDividerImageView;
@property (nonatomic) BOOL isWhite;

+ (id)identifier;

- (void)avatarClicked;
- (void)configWithManagerModel:(id)a0;
- (void)_setAvatarViewWithURL:(id)a0;
- (void)_setPendantViewWithURL:(id)a0;
- (void)changesettingBtnStatus:(BOOL)a0;
- (void)_refreshsettingBtn;
- (void)settingBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_setupUI;

@end
