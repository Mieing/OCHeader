@class UILabel, AWEIMGeneralCardView, NSString;

@interface AWEIMShareTrendMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMShareCardViewDelegate>

@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) UILabel *shootSameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)coverTapped:(id)a0;
- (void)shootSameButtonTapped;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
