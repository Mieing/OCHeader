@class UIImageView, UILabel, UIView, UIButton;
@protocol AWESBCDefaultNotificationViewDelegate;

@interface AWESBCDefaultNotificationView : UIView

@property (weak, nonatomic) id<AWESBCDefaultNotificationViewDelegate> delegate;
@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *extAvatarBackground;
@property (retain, nonatomic) UIImageView *extAvatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *replyButton;

- (void)handleTapAction;
- (void)__addSubviews;
- (void)updateConfigurablePushView;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
