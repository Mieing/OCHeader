@class UIView;

@interface MMFinderLiveBaseCardView : UIView

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *closeButton;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubViews;
- (void)createConstraints;
- (void)showIn:(id)a0;
- (void)hide:(id /* block */)a0;
- (void).cxx_destruct;

@end
