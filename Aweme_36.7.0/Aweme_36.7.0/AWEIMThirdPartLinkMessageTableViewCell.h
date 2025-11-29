@class AWEIMGeneralCardView, UIView;

@interface AWEIMThirdPartLinkMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView *bubbleView;
@property (readonly, nonatomic) AWEIMGeneralCardView *cardViewView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)bubbleViewTapped:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (void)trackCellClick;
- (void)trackOpenPlatformEvent:(id)a0;
- (void)trackWithEventName:(id)a0;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (void)willDisplayCell;

@end
