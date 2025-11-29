@class UIImageView, UIVisualEffectView, UILabel, XImageViewRenderer;
@protocol VoIPInvitationBreadthQuickReplyViewDelegate;

@interface VoIPInvitationBreadthQuickReplyView : UIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIImageView *phoneIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIImageView *jumpIconImageView;
@property (retain, nonatomic) XImageViewRenderer *renderer;
@property (weak, nonatomic) id<VoIPInvitationBreadthQuickReplyViewDelegate> delegate;
@property (nonatomic) BOOL lookLikeInviteView;
@property (nonatomic) double lookLikeInviteViewTitleCenterY;
@property (nonatomic) BOOL isCaptureImageVisable;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contact:(id)a1;
- (void)setupCaptureImage:(id)a0;
- (void)layoutSubviews;
- (void)onMyselfClick:(id)a0;
- (void).cxx_destruct;

@end
