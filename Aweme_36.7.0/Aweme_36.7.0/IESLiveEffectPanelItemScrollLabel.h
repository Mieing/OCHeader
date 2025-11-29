@class UILabel, UIView;

@interface IESLiveEffectPanelItemScrollLabel : UIView

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) BOOL shouldScroll;
@property (retain, nonatomic) UIView *loopContainerView;

- (void)configLoopConatainer;
- (id)createLabelWithText:(id)a0 textColor:(id)a1 font:(id)a2;
- (void)updateTitle:(id)a0 titleColor:(id)a1 font:(id)a2 contentSize:(struct CGSize { double x0; double x1; })a3;
- (void)startAnimationWithKey:(id)a0;
- (void)stopAnimationWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
