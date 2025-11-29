@class IESLiveInteractLinkMicMatchSuccessPanelConfig, UIImageView, IESLiveGCDTimer, UIView, UILabel, UIButton;
@protocol IESLiveInteractLinkMicMatchSuccessPanelDelegate;

@interface IESLiveInteractLinkMicMatchSuccessPanel : UIView

@property (weak, nonatomic) id<IESLiveInteractLinkMicMatchSuccessPanelDelegate> delegate;
@property (retain, nonatomic) IESLiveInteractLinkMicMatchSuccessPanelConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *tagViewsContainer;
@property (retain, nonatomic) UIView *buttonsContainer;
@property (retain, nonatomic) UIButton *rematchButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *centerContainerView;
@property (retain, nonatomic) UIView *linkUsersContainerView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (void)p_stopTimer;
- (void)p_didTapCancelButton;
- (id)p_getProperSubStringWithEmojiString:(id)a0 limitLength:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 config:(id)a2;
- (double)properHeight;
- (void)didShowSuccessPanel;
- (void)willHideSuccessPanel;
- (void)p_didTapRematchButton;
- (void)p_didTapConfirmButton;
- (id)p_buildLinkUsersContainerViewWithLinkUsers:(id)a0;
- (id)p_buildTagContainerViewWithTags:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)setupViews;

@end
