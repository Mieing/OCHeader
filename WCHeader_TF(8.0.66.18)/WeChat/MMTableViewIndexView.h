@class UIColor, NSString, NSArray, NSMutableDictionary, UIImageView, NSMutableArray, UIPanGestureRecognizer, UILabel, MMTableView;
@protocol MMTableViewIndexViewDelegate;

@interface MMTableViewIndexView : MMUIView <MMUIViewControllerExt> {
    MMTableView *_mmtableView;
    id<MMTableViewIndexViewDelegate> _delegate;
    NSArray *_indexTitles;
    NSMutableArray *_indexItems;
    BOOL _isTouching;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedTableViewFrame;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _savedTableViewInsets;
    UIImageView *_indexShape;
    UILabel *_indexShapeLabel;
    UIImageView *_indexShapeImage;
    long long _currentIndex;
    long long _currentSection;
    UIColor *_brandColor;
    UIPanGestureRecognizer *_panGesture;
}

@property (retain, nonatomic) NSMutableDictionary *gestureCancelTouchStatus;
@property (nonatomic) int operationCount;
@property (nonatomic) int extendHitWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0 withDelegate:(id)a1;
- (void)initBrandColor;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)reloadView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getTableViewContentInset;
- (void)reloadIndexView;
- (void)totallyReloadView;
- (void)scrollToSectionIndex:(long long)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)handleTouches:(id)a0 withEvent:(id)a1;
- (void)endTouches;
- (void)handleTouchToIndex:(long long)a0;
- (void)showContactIndexShape:(long long)a0;
- (id)getFirstNormalIndexItemWithIndex:(long long)a0;
- (void)refreshIndexShapeWithItem:(id)a0;
- (void)hideContactIndexShape;
- (void)clearSectionHeaderSelection;
- (void)resetGesture;
- (void)recordAndTurnOffGestureCancelTouches;
- (void)recoverGestureCancelTouches;
- (void)MMUIViewControllerWillAppear:(id)a0;
- (void).cxx_destruct;

@end
