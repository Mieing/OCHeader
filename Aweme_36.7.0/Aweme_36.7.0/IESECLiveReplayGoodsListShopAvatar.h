@class UIImageView, UILabel, UIView;

@interface IESECLiveReplayGoodsListShopAvatar : UIView

@property (copy, nonatomic) id /* block */ clickedBlock;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *bottomInfoBackgroundView;
@property (retain, nonatomic) UILabel *bottomInfoLabel;

- (void)didClickedAvatar:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
