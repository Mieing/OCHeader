@class NSString, UIImageView, MMUIButton;

@interface MMLiveRewardGainRecordsBar : MMLiveBaseComponentView

@property (retain, nonatomic) NSString *rewardWecoinCntTitle;
@property (retain, nonatomic) MMUIButton *giftRecordsButton;
@property (retain, nonatomic) UIImageView *avatarIcon;
@property (copy, nonatomic) id /* block */ giftRecordsButtonClickedBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 componentKey:(id)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateRewardWecoinCnt:(unsigned long long)a0;
- (void)sizeToFits;
- (void)onGiftRecordsButtonClicked;
- (void).cxx_destruct;

@end
