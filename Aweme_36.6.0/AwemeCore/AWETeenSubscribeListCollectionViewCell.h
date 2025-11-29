@class UIButton, AWEBillboardLabel, AWEUserModel, AWETeenUserAvatarView;

@interface AWETeenSubscribeListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWETeenUserAvatarView *avatarView;
@property (retain, nonatomic) AWEBillboardLabel *nameLabel;
@property (retain, nonatomic) UIButton *subscribeButton;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) id /* block */ didClickSubscribe;

- (void)configCellWithModel:(id)a0;
- (void)p_updateThemeWithStatus:(long long)a0;
- (void)subscribeBtnClicked:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
