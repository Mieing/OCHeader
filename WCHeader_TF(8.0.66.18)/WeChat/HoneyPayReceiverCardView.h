@class WCPayWebImageView, WCPayBindCardInfo, UIImageView, WCPayControlData, UIView, UILabel, UIButton;
@protocol HoneyPayReceiverCardViewDelegate;

@interface HoneyPayReceiverCardView : UIView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCPayWebImageView *icon;
@property (retain, nonatomic) UILabel *cardTypeLabel;
@property (retain, nonatomic) UILabel *sendByLabel;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) UILabel *balanceTipLabel;
@property (retain, nonatomic) UIImageView *backgroundIcon;
@property (weak, nonatomic) id<HoneyPayReceiverCardViewDelegate> delegate;
@property (retain, nonatomic) WCPayBindCardInfo *info;
@property (retain, nonatomic) WCPayControlData *data;

- (id)initWithInfo:(id)a0 data:(id)a1;
- (void)layout;
- (void)click;
- (void).cxx_destruct;

@end
