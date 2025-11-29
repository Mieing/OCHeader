@class UIImageView, IESLiveIntimateChatOperationListCellItem, UILabel, NSNumber, UIButton;

@interface IESLiveIntimateChatOperationNormalCell : UITableViewCell

@property (retain, nonatomic) IESLiveIntimateChatOperationListCellItem *item;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *rankImageView;
@property (retain, nonatomic) UIImageView *honorImageView;
@property (retain, nonatomic) UIImageView *fansClubImageView;
@property (retain, nonatomic) UIButton *operationButton;
@property (retain, nonatomic) UIImageView *applyReasonIconImageView;
@property (retain, nonatomic) UILabel *applyReasonLabel;
@property (retain, nonatomic) NSNumber *now;

+ (id)cellIdentifier;

- (void)p_setupViews;
- (void)p_operate;
- (id)waitingDesStringWithModel:(id)a0 nowTime:(id)a1 isAddPrice:(BOOL)a2;
- (void)p_updateOperationButtonAppearance:(BOOL)a0 enableTitle:(id)a1 disableTitle:(id)a2;
- (void)p_showUserProfile;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateItem:(id)a0;

@end
