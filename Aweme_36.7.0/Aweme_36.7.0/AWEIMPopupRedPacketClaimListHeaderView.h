@class UIImageView, UILabel, UIView, AWEIMPopupRedPacketOpenDetailData;

@interface AWEIMPopupRedPacketClaimListHeaderView : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *redPacketInfoView;
@property (retain, nonatomic) UIImageView *senderAvatarView;
@property (retain, nonatomic) UILabel *redPacketInfoLabel;
@property (retain, nonatomic) UILabel *greetingsLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *currencyLabel;
@property (retain, nonatomic) UILabel *withdrawTipsLabel;
@property (retain, nonatomic) UILabel *expireLabel;
@property (retain, nonatomic) UIView *dividingView;
@property (retain, nonatomic) UILabel *claimSituationLabel;
@property (retain, nonatomic) UIView *divdingLine;
@property (retain, nonatomic) AWEIMPopupRedPacketOpenDetailData *applyDetailData;
@property (nonatomic) BOOL shouldHideCoverImageOnHeaderView;
@property (copy, nonatomic) id /* block */ enterProfitPageCompletion;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;

- (void)configModel:(id)a0;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (void)jumpToWalletPage;
- (void)remakeLottieViewConstraint:(id)a0;
- (void)executeReceiveResultAnimation;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateUI;

@end
