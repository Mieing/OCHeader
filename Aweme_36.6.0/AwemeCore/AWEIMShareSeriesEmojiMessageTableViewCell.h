@class AWEIMGeneralCardView, UIView;

@interface AWEIMShareSeriesEmojiMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView *bubbleView;
@property (readonly, nonatomic) AWEIMGeneralCardView *cardViewView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_initSubviews;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)coverTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;

@end
