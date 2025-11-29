@class AWENotificationModelNew, UIImageView, NSString, UILabel, UIView, AWETeenMessageContentCardView;
@protocol AWETeenMessageTableViewCellDelegate;

@interface AWETeenMessageTableViewCell : UITableViewCell <AWETeenMessageContentCardViewDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *settingView;
@property (retain, nonatomic) UIView *avatarSeparateLine;
@property (retain, nonatomic) AWETeenMessageContentCardView *contentContainerView;
@property (retain, nonatomic) UIView *detailSeparateLine;
@property (retain, nonatomic) UILabel *detailTitle;
@property (retain, nonatomic) UIImageView *detailImageView;
@property (retain, nonatomic) AWENotificationModelNew *model;
@property (weak, nonatomic) id<AWETeenMessageTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)onNoticeTextUnfoldClick;
- (void)setAvatarHidden:(BOOL)a0;
- (void)setGotoDetailHidden:(BOOL)a0;
- (void)onSettingTap;
- (void)onGotoDetailTap;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
