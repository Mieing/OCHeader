@class UIStackView, UIView, NSString, UIImageView, UIButton, MASConstraint, IESLivePaidStreamActionButton, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLivePaidStreamLiveFeedTicketView : UIView <IESLivePaidStreamFeedTicketViewProtocol>

@property (weak, nonatomic) UIImageView *avatarImageView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) UIImageView<IESLiveWebPPlayer> *livingImageView;
@property (weak, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) UILabel *priceLabel;
@property (weak, nonatomic) UILabel *originPriceLabel;
@property (weak, nonatomic) UIStackView *tagStackView;
@property (weak, nonatomic) IESLivePaidStreamActionButton *ticketButton;
@property (weak, nonatomic) UIButton *grabButton;
@property (weak, nonatomic) UIView *divisionView;
@property (retain, nonatomic) MASConstraint *ticketButtonTopConstraint;
@property (retain, nonatomic) MASConstraint *grabButtonTopConstraint;
@property (retain, nonatomic) MASConstraint *buttonTopConstraint;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)titleLabelWidth;
- (void)install:(unsigned long long)a0 uiConfig:(id)a1 actionHandler:(id /* block */)a2;
- (id)adLabelAttributedStringWithTitle:(id)a0 adTagImage:(id)a1;
- (id)priceAttributedString:(id)a0 GrabType:(BOOL)a1;
- (id)originPriceAttributedString:(id)a0;
- (void)ticketTapAction:(id)a0;
- (BOOL)optAnimationLeak;
- (void)ticketButtonAction:(id)a0;
- (void)grabButtonAction:(id)a0;
- (void)uninstall;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
