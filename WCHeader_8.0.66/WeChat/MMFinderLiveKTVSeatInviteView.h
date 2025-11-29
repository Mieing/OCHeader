@class UIImageView, MMLiveTaskId, UIView, MMUILabel;

@interface MMFinderLiveKTVSeatInviteView : UIView

@property (retain, nonatomic) UIView *inviteRoundView;
@property (retain, nonatomic) UIImageView *inviteIconView;
@property (retain, nonatomic) MMUILabel *inviteLabel;
@property (retain, nonatomic) MMLiveTaskId *taskId;

+ (double)preferWidth;
+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInviteRoundBtn;
- (void)layoutInviteIconView;
- (void)layoutInviteLabel;
- (void)updateInviteLabelText;
- (void)updateInviteLabelOrigin;
- (void)refreshUI;
- (void).cxx_destruct;

@end
