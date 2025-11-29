@class UILongPressGestureRecognizer, BTBaseRecommendAppMsgCellViewModel, UIView;

@interface BTMissedSubsBaseItemCell : BTBaseItemCellView

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGest;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (nonatomic) BOOL forceHighlight;
@property (readonly, nonatomic) BTBaseRecommendAppMsgCellViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)configureLayout;
- (void)updateCoverImg:(id)a0 urlStr:(id)a1;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)addRaddiCorner;
- (unsigned long long)contentViewRaddiCorners;
- (void)layoutHightMaskView;
- (void)addLongPressGesture;
- (void)handleLongPressEx:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)forceSetHighlighted:(BOOL)a0;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
