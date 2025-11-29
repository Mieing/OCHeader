@class UIButton, NSString, UIImageView, AWEPaymentBadgeView, UILabel, UIView, AWEPlayletCardInfoModel;

@interface AWEPlayletUserProfileTabCollectionHeaderView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *playletCoverView;
@property (retain, nonatomic) UIImageView *playletIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *updateCountLabel;
@property (retain, nonatomic) AWEPlayletCardInfoModel *playletCardModel;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (copy, nonatomic) NSString *fromGroupID;
@property (copy, nonatomic) NSString *subEntrance;
@property (copy, nonatomic) id /* block */ enterPlayletFeedBlock;
@property (retain, nonatomic) UIButton *playletButton;

- (void)configWithModel:(id)a0;
- (void)enterDetail:(id)a0;
- (long long)strategyInformationType;
- (id)updateCountLabelFont;
- (id)playletButtonFont;
- (void)enterFeed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleLabelFont;
- (void)setUpUI;

@end
