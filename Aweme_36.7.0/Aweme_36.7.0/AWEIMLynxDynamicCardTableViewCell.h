@class UIView;

@interface AWEIMLynxDynamicCardTableViewCell : AWEIMFirstResponderUserMessageTableViewCell

@property (retain, nonatomic) UIView *container;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)firstResponderContainerView;
- (id)p_getLynxContainerView:(id)a0;
- (id)p_getLiveLynxConatinerView:(id)a0;
- (void)p_updateLynxCardSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)setupUI;

@end
