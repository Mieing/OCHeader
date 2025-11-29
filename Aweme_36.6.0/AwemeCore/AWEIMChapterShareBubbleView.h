@class UITapGestureRecognizer, AWEIMChapterShareBubbleViewModel, UIView, UILabel, YYLabel;

@interface AWEIMChapterShareBubbleView : UIView

@property (retain, nonatomic) AWEIMChapterShareBubbleViewModel *viewModel;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *subTitleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ didTapViewBlock;

- (void)p_updateUI;
- (void)p_updateLayout;
- (void)p_setupLayout;
- (void)p_setupViews;
- (void)updateWithModel:(id)a0 hasBackground:(BOOL)a1;
- (void)p_updateView;
- (void)p_didTapView:(id)a0;
- (void)updateColorWithHasBackground:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
