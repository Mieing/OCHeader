@class CAGradientLayer, NSString, UIImageView, UIView, UILabel, UIButton;

@interface IESLivePresentTicketView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *ticketImageView;
@property (retain, nonatomic) CAGradientLayer *personInfoViewGradientLayer;
@property (retain, nonatomic) UIImageView *ticketBelowView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *getTicketButton;
@property (retain, nonatomic) UIImageView *saveTicketImageTipsImageView;
@property (retain, nonatomic) UIImageView *QRCodeImageView;
@property (nonatomic) BOOL hasGotTicket;
@property (copy, nonatomic) NSString *titleInfo;
@property (copy, nonatomic) NSString *timeInfo;

- (void)reloadUI;
- (void)setupNormalUI;
- (id)renderTicketImage;
- (void)reloadForGotTicket;
- (void)reloadForGettingTicket;
- (void).cxx_destruct;
- (id)init;

@end
