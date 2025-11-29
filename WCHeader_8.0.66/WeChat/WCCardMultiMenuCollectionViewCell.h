@class UIColor, NSString, UIGestureRecognizer, UIImageView, UIView, NSIndexPath, NSMutableArray;

@interface WCCardMultiMenuCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, CAAnimationDelegate> {
    UIView *_menuContentView;
    UIView *_actualContentView;
    UIGestureRecognizer *_panGestureRecognizer;
    double _initialTouchPositionX;
    BOOL _shouldDisplayContextMenuView;
    BOOL _contextMenuHidden;
    BOOL _shouldDisplayRightSwipeTips;
    UIImageView *_copyedBackgroundView;
    BOOL _bIsNeedUpdateMenu;
}

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSMutableArray *arrMenuItems;
@property (nonatomic) BOOL contextMenuEnabled;
@property (retain, nonatomic) UIColor *menuBackgroundColor;
@property (copy, nonatomic) id /* block */ editAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)forceHideMenuOptionsAnimated:(BOOL)a0;
- (void)hideMenuOptionsAnimated:(BOOL)a0;
- (BOOL)isPointInMenu:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isMenuHidden;
- (void)handlePan:(id)a0;
- (void)onGiftButtonClicked:(id)a0;
- (void)onDeleteButtonClicked:(id)a0;
- (void)updateMenuView;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)contentView;
- (void)onClearBackgroundView;
- (void)setMenuOptionsViewHidden:(BOOL)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)resetActionContentView;
- (id)animation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)showRightSwipeTips;
- (double)getCurrentWidth;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
