@class MMUILabel, UIView;

@interface WCListenLyricsPlayCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) UIView *highlightedView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureLayout;
- (void)internalConfigureLayout:(id)a0 textColor:(id)a1 paddingEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateText:(id)a0;
- (void)updateText:(id)a0 font:(id)a1 textColor:(id)a2 paddingEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void)updateDisplay:(double)a0;
- (void).cxx_destruct;

@end
