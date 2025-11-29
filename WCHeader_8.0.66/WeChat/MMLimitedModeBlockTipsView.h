@class UIScrollView, MMUILabel;

@interface MMLimitedModeBlockTipsView : UIView

@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (copy, nonatomic) id /* block */ onQuitBlock;

+ (id)showBlockTipsInViewController:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configView;
- (void)layoutSubviews;
- (void)onClickQuitBtn;
- (void).cxx_destruct;

@end
