@class NSArray, AWEIMActionsViewLayoutContext, AWEIMSwipeAction, AWEIMSwipeActionButtonWrapperView, AWEIMSwipeOptions;
@protocol UIViewAnimating, AWEIMSwipeTransitionLayout, AWEIMSwipeActionsViewDelegate;

@interface AWEIMSwipeActionsView : UIView

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSArray *buttonWrapperViews;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) AWEIMSwipeActionButtonWrapperView *expandActionWrapperView;
@property (retain, nonatomic) NSArray *expandButtonWrapperViews;
@property (retain, nonatomic) AWEIMActionsViewLayoutContext *layoutContext;
@property (retain, nonatomic) id<AWEIMSwipeTransitionLayout> transitionLayout;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double visibleWidth;
@property (nonatomic) double minimumButtonWidth;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL reconfirmationExpanded;
@property (copy, nonatomic) NSArray *expandableActions;
@property (retain, nonatomic) AWEIMSwipeAction *shouldExpandAction;
@property (nonatomic) BOOL shouldUpdateButtonFrame;
@property (retain, nonatomic) id<UIViewAnimating> expansionAnimator;
@property (retain, nonatomic) AWEIMSwipeOptions *options;
@property (weak, nonatomic) id<AWEIMSwipeActionsViewDelegate> delegate;
@property (readonly, nonatomic) double preferredWidth;

- (double)maximumImageHeight;
- (id)__addButtonsForActions:(id)a0 withMaximum:(struct CGSize { double x0; double x1; })a1;
- (void)__actionTappedWithButton:(id)a0;
- (void)__notifyVisibleWidthChanged:(id)a0 newWidths:(id)a1;
- (void)__updateExpanded:(BOOL)a0 duration:(double)a1 action:(id)a2;
- (id)__actionButtonWrapperViewWithAction:(id)a0 inWrapperViews:(id)a1;
- (id)__createButtonWrappersForActions:(id)a0 preferredButtonWidth:(double)a1;
- (void)updateReconfirmExpanded:(BOOL)a0 action:(id)a1;
- (id)initWithOptions:(id)a0 actions:(id)a1 orientation:(long long)a2 maxSize:(struct CGSize { double x0; double x1; })a3;
- (void)updateVisibleWidth:(double)a0;
- (void)updateExpanded:(BOOL)a0 action:(id)a1;
- (void)updateReconfirmExpanded:(BOOL)a0;
- (id)createDeletionMask;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateExpanded:(BOOL)a0;

@end
