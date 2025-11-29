@class AWEIMShareVSLiveCardView;

@interface AWEIMShareVSLiveMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMShareVSLiveCardView *bubbleView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)p_defaultPostImageForMe;
+ (id)p_defaultPostImageForOther;
+ (id)identifier;

- (void)p_addGesture;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)liveCoverTapped:(id)a0;
- (void)cardAvatarTapped:(id)a0;
- (void)p_updateBubbleView;
- (BOOL)p_isFansGroup;
- (void)tapLiveCardAction;
- (void)transferToLive;
- (void)p_liveShowTracker;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)willDisplayCell;

@end
