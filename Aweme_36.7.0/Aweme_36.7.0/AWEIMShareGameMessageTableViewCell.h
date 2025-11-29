@class AWEIMGeneralCardView;

@interface AWEIMShareGameMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMGeneralCardView *cardView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)trackCardClick;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (id)transitionGameModelFromMessage:(id)a0;
- (void)didTapGame:(id)a0;
- (id)chatTypeString;
- (void)gameCoverTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
