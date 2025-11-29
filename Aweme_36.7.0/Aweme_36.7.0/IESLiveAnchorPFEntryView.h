@class NSArray, UIStackView;

@interface IESLiveAnchorPFEntryView : UIView

@property (copy, nonatomic) NSArray *entryItems;
@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) id /* block */ onDidTapped;
@property (copy, nonatomic) id /* block */ onDidAppear;
@property (copy, nonatomic) id /* block */ onDidDisAppear;

- (id)itemViewAtIndex:(long long)a0;
- (void)didTapped;
- (void)reloadEntryItem:(id)a0;
- (void)injectEntryItems:(id)a0;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setupLayout;

@end
