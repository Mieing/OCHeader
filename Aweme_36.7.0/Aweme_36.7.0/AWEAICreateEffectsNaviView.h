@class UILabel, UIButton, UIView;

@interface AWEAICreateEffectsNaviView : UIView

@property (retain, nonatomic) UIView *bar;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *generateCloseBtn;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)closeButtonDidClicked:(id)a0;
- (void)layoutCreateKeywordsView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
