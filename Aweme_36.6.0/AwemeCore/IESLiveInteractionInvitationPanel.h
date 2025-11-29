@class IESLiveInteractionInvitationPanelViewModel, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveCompoundSubscription, IESLiveWebPPlayer, IESLiveWebImageService;

@interface IESLiveInteractionInvitationPanel : UIView

@property (retain, nonatomic) id<IESLiveCompoundSubscription> viewModelDisposable;
@property (retain, nonatomic) UIView *pullDownIndicator;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIImageView *avatarBottomRightDecoration;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *avatarBackgroundAnimation;
@property (retain, nonatomic) UILabel *invitationDescription;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UILabel *invitationDetail;
@property (weak, nonatomic) id<IESLiveWebImageService> imageService;
@property (nonatomic) long long hideSource;
@property (copy, nonatomic) id /* block */ didClickLeftButton;
@property (copy, nonatomic) id /* block */ didClickRightButton;
@property (readonly, nonatomic) IESLiveInteractionInvitationPanelViewModel *viewModel;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } panelSize;

- (void)onRightButtonClicked;
- (id)initWithViewModel:(id)a0 popupService:(id)a1 imageService:(id)a2;
- (void)popupInContainer:(id)a0 didClickLeftButton:(id /* block */)a1 didClickRightButton:(id /* block */)a2 didHide:(id /* block */)a3;
- (void)onLeftButtonClicked;
- (void).cxx_destruct;
- (void)dealloc;

@end
