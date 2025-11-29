@class NSTimer, HTSLiveGiftMessage, UILabel, UIImageView;

@interface IESLiveGuestLinkGiftItem : UIView

@property (retain, nonatomic) HTSLiveGiftMessage *gift;
@property (retain, nonatomic) NSTimer *hideTimer;
@property (readonly, nonatomic) BOOL isIdle;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) UILabel *senderLabel;
@property (retain, nonatomic) UILabel *toLabel;
@property (retain, nonatomic) UILabel *receiverLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) UILabel *comboLabel;

- (id)giftFrom:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setup;

@end
