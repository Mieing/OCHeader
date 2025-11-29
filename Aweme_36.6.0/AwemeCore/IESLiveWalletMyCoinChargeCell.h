@class IESLiveWalletMyCoinItem, UIImageView, IESLiveWalletCoinChargeView, UILabel, UIView, UIButton;

@interface IESLiveWalletMyCoinChargeCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coinIcon;
@property (retain, nonatomic) UILabel *coinNumLabel;
@property (retain, nonatomic) UILabel *freezeLabel;
@property (retain, nonatomic) UIView *tipContainer;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESLiveWalletMyCoinItem *mycoinItem;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) IESLiveWalletCoinChargeView *coinChargeView;

- (void)tapTipContainer;
- (void)tapCloseTip;
- (void)updateWithItem:(id)a0 trackInfo:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
