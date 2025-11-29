@class NSIndexPath, UIPanGestureRecognizer, AWEIMSwipeController, NSString, UIScrollView, AWEIMSwipeActionsView, UITableView;
@protocol AWEIMSwipeTableViewCellDelegate;

@interface AWEIMSwipeTableViewCell : UITableViewCell <AWEIMSwipeable, AWEIMSwipeControllerDelegate>

@property (retain, nonatomic) AWEIMSwipeController *swipeController;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isPreviouslySelected;
@property (weak, nonatomic) id<AWEIMSwipeTableViewCellDelegate> swipeTableViewCelldelegate;
@property (nonatomic) long long swipeState;
@property (retain, nonatomic) AWEIMSwipeActionsView *swipeActionsView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__reset;
- (BOOL)performAccessibilityCustomAction:(id)a0;
- (void)hideSwipeWithAnimated:(BOOL)a0 complation:(id /* block */)a1;
- (void)showSwipeWithOrientation:(long long)a0 animated:(BOOL)a1 complation:(id /* block */)a2;
- (void)setOffset:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)__resetSelectedState;
- (BOOL)__containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)swipeController:(id)a0 canBeginEditingSwipeableForOrientation:(long long)a1 forGesture:(id)a2;
- (id)swipeController:(id)a0 editActionsForSwipeableForForOrientation:(long long)a1;
- (id)swipeController:(id)a0 editActionsOptionsForSwipeableForOrientation:(long long)a1;
- (void)swipeController:(id)a0 willBeginEditingSwipeableForOrientation:(long long)a1;
- (void)swipeController:(id)a0 didEndEditingSwipeableForOrientation:(long long)a1;
- (void)swipeController:(id)a0 didDeleteSwipeableAtIndexPath:(id)a1;
- (void)checkAndFixClips;
- (void)__handleTableViewPanGesture:(id)a0;
- (void)configure;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)accessibilityCustomActions;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
