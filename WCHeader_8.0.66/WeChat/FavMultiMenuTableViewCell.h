@class UILongPressGestureRecognizer, UIColor, UIView;
@protocol FavMultiMenuTableViewCellDelegate;

@interface FavMultiMenuTableViewCell : MMMultiMenuTableViewCell {
    UIView *coverView;
    BOOL m_selected;
    BOOL _isPreparingToShowMenu;
}

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) UIView *m_bkgCardView;
@property (retain, nonatomic) UIColor *bkgCardBackgroundColor;
@property (weak, nonatomic) id<FavMultiMenuTableViewCellDelegate> delegate;
@property (nonatomic) BOOL disableGesture;

+ (void)setFrameAnimationEnabled:(BOOL)a0;
+ (BOOL)isFrameAnimationEnabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initLongPress;
- (void)handleLongPress:(id)a0;
- (void)handlePan:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setCoverView:(BOOL)a0;
- (id)indexPath;
- (void)showMenuItems;
- (void)menuItemHidden;
- (void)setMenuOptionsViewHidden:(BOOL)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)forwardAction:(id)a0;
- (void)pinTopAction:(id)a0;
- (void)unpinTopAction:(id)a0;
- (void)deleteAction:(id)a0;
- (void)showContentAction:(id)a0;
- (void)moreAction:(id)a0;
- (void)editTagAction:(id)a0;
- (void)onMenuTransitionToConfirmState:(long long)a0;
- (void).cxx_destruct;

@end
