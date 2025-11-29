@class AWEIMRTVInviteCardView, NSMutableDictionary;

@interface AWEIMRTVInviteMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (readonly, nonatomic) AWEIMRTVInviteCardView *inviteCardView;
@property (readonly, nonatomic) NSMutableDictionary *reusableCardViewMapper;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (struct CGPoint { double x0; double x1; })contentViewOrigin;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)setRouterParams:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)willDisplayCell;

@end
