@class NSData, UIView, NSString, MMLiveTaskId, UIImageView, UIButton, MMFinderLivePromoteDisplayLeaseToken, UILabel;
@protocol MMFinderLiveMicInviteAudienceBubbleViewDelegate;

@interface MMFinderLiveMicInviteAudienceBubbleView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *micIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (weak, nonatomic) id<MMFinderLiveMicInviteAudienceBubbleViewDelegate> actionDelegate;
@property (nonatomic) unsigned long long micSeatId;
@property (retain, nonatomic) NSData *inviteMicBuffer;
@property (retain, nonatomic) MMFinderLivePromoteDisplayLeaseToken *displayLeaseToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1;
- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onTapAcceptButton;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onPromoteDisplayLeaseViewAttached:(id)a0;
- (void).cxx_destruct;

@end
