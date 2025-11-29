@class UIStackView, NSString, UIImageView, IESLivePaidStreamActionButton, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLivePaidStreamFeedTicketView : UIView <IESLivePaidStreamFeedTicketViewProtocol>

@property (weak, nonatomic) UIImageView *avatarImageView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UIImageView<IESLiveWebPPlayer> *livingImageView;
@property (weak, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) IESLivePaidStreamActionButton *actionButton;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionDidFire:(id)a0;
- (void)install:(unsigned long long)a0 uiConfig:(id)a1 actionHandler:(id /* block */)a2;
- (void)uninstall;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
