@class MMLiveRewardGiftCoinButton, UIView, MMUIButton, MMUILabel;
@protocol MMLiveJoinGameAudiencePaymentViewDelegate, MMLiveRewardGiftSelectionLogicDelegate;

@interface MMLiveJoinGameAudiencePaymentView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned int payment;
@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMLiveRewardGiftCoinButton *coinButton;
@property (retain, nonatomic) MMUILabel *title;
@property (retain, nonatomic) MMUILabel *payNumLabel;
@property (retain, nonatomic) MMUIButton *payButton;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (weak, nonatomic) id<MMLiveRewardGiftSelectionLogicDelegate> logicDelegate;
@property (nonatomic) long long balance;
@property (weak, nonatomic) id<MMLiveJoinGameAudiencePaymentViewDelegate> delegate;

- (id)initWithPayment:(unsigned int)a0;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateWithPayment:(unsigned int)a0;
- (void)pageSheetDidAppear;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)a0;
- (void)onClickBackButton;
- (void)onPayButtonClicked;
- (void)onCoinButtonClicked;
- (void).cxx_destruct;

@end
