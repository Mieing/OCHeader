@class NSArray, NSMutableArray, BTFixedFinderCellViewModel;
@protocol BTFixedFinderCellViewDelegate;

@interface BTFixedFinderCellView : BTBaseRecommendAppMsgCellView

@property (retain, nonatomic) NSMutableArray *finderItemViewArr;
@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (weak, nonatomic) id<BTFixedFinderCellViewDelegate> finderCellViewDelegate;
@property (readonly, nonatomic) BTFixedFinderCellViewModel *viewModel;
@property (readonly, nonatomic) NSArray *finderViewArr;

- (id)createBaseItemViewWithItemViewModel:(id)a0;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)didHideFinderItemViewWithIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFinderItemViewFrameWithIndex:(long long)a0 toView:(id)a1 isInfoArea:(BOOL)a2;
- (void)setFinderItemViewInfoAreaWithIndex:(long long)a0 bHighlight:(BOOL)a1;
- (void)setFinderItemViewContentAreaWithIndex:(long long)a0 bHighlight:(BOOL)a1;
- (id)finderItemViewContentWithIndex:(long long)a0;
- (void)layoutSubviews;
- (void)layoutCardView;
- (unsigned long long)cellRectCorner;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
