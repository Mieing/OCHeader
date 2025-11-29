@class UIView, UIFont, UITextView, UIImageView, UIButton, LOTAnimationView, AWEIMLiveGroupAnnouncementLiveStatusResponse, UILabel;
@protocol IESIMMultiAvatarViewProtocol, IESIMGradientViewProtocol;

@interface AWEIMLiveGroupAnnouncementMessageView : UIView

@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *livingContainerView;
@property (retain, nonatomic) LOTAnimationView *livingAinmationView;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView<IESIMMultiAvatarViewProtocol> *multiAvatarView;
@property (retain, nonatomic) UILabel *subscribedNumberLabel;
@property (retain, nonatomic) UIButton *subscribeBtn;
@property (retain, nonatomic) UITextView *expiredStatusView;
@property (retain, nonatomic) UIView *livingStatusView;
@property (retain, nonatomic) UIImageView *livingAvatarView;
@property (retain, nonatomic) UILabel *livingLabel;
@property (nonatomic) long long roomId;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementLiveStatusResponse *displayingStatusResponse;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) long long announcementId;
@property (retain, nonatomic) UIFont *textFont;
@property (copy, nonatomic) id /* block */ subscribeBtnTapAction;

- (void)layoutLeftStateViewWithContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_addSubViews;
- (void)p_addTapAction;
- (void)p_didTapOnSubscribeBtn;
- (BOOL)p_enableStateUIOptimize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
