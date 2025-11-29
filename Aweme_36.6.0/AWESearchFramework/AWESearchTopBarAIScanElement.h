@class UIButton;

@interface AWESearchTopBarAIScanElement : AWESearchTopBarBaseElement

@property (retain, nonatomic) UIButton *scanButton;
@property (nonatomic) long long currentPosition;

- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hostMiddlePageDidShowWithInteractionType:(long long)a0;
- (void)hostSugPageDidShowWithModeStyle:(long long)a0 position:(long long)a1;
- (void)topbarUIStyleDidChange:(long long)a0;
- (void)trackAIScanEventName:(id)a0 position:(long long)a1;
- (void)scanButtonClicked;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
