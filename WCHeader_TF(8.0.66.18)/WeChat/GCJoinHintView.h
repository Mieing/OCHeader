@class UIButton, UIView;

@interface GCJoinHintView : UIView

@property (retain, nonatomic) UIButton *btn;
@property (retain, nonatomic) UIView *leftGroupView;

- (void)configureWithRestrictRuleList:(id)a0 headImageUrl:(id)a1 canJoin:(BOOL)a2 failTip:(id)a3;
- (void).cxx_destruct;

@end
