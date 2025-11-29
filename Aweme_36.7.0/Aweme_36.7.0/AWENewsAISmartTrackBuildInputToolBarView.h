@class UIStackView;

@interface AWENewsAISmartTrackBuildInputToolBarView : UIView

@property (retain, nonatomic) UIStackView *stackView;

- (void)p_configUI;
- (void)p_makeConstraint;
- (void)addButtonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)removeButtonWithTitle:(id)a0;
- (void)clearAllButtons;
- (void).cxx_destruct;
- (id)init;

@end
