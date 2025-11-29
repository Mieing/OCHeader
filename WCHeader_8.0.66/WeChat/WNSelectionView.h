@class MMTableView, NSString, UITapGestureRecognizer, UIMenuItem, UIPanGestureRecognizer, MMMagnifiterView, MMSelectCoverView, WeNoteDataController;
@protocol WNSelectionViewDelegate;

@interface WNSelectionView : MMUIView <UIGestureRecognizerDelegate> {
    UIPanGestureRecognizer *m_oPanGestureRecognizer;
    UITapGestureRecognizer *m_tapGestureRecognizer;
    MMSelectCoverView *_coverView;
    BOOL _bTouchLeft;
    BOOL _bTouchRight;
    double _startOffsetY;
    BOOL _isEnable;
    BOOL _isScrollFromSelf;
    UIMenuItem *m_orderListItem;
}

@property (nonatomic) BOOL bSelecting;
@property (readonly, nonatomic) BOOL selectionShowing;
@property (weak, nonatomic) id<WNSelectionViewDelegate> delegate;
@property (weak, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) WeNoteDataController *dataController;
@property (retain, nonatomic) MMMagnifiterView *magnifiterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)getMenuItemsWithResponder:(id)a0;
- (void)checkOrderListMenuItemWith:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)hideView;
- (double)paragraphLeft;
- (void)didReloadView;
- (void)cancelSelect;
- (void)tryShowSelectionViewWithMenue:(BOOL)a0;
- (void)tryToShowMenueWithoutSelectionView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tryUpdateSelectionViewOnScroll;
- (void)delayShowMenu;
- (void)checkShouldEnable;
- (void)showCoverView;
- (void)removeMaginfierView;
- (id)magnifiterView:(double)a0;
- (void)showMenuItems;
- (void)hideMenuItems;
- (BOOL)showOrderListMenuWith:(id)a0;
- (void)onDelete:(id)a0;
- (void)onCopy:(id)a0;
- (void)onCut:(id)a0;
- (void)onPaste:(id)a0;
- (void)onEdit:(id)a0;
- (void)setLargeImage:(id)a0;
- (void)setSmallImage:(id)a0;
- (void)selectAll:(id)a0;
- (void)setBoldFromKey:(id)a0;
- (void)setHighlightFromKey:(id)a0;
- (void)onUndo:(id)a0;
- (void)onEditOrderList:(id)a0;
- (void)onRedo:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)onTapAction:(id)a0;
- (void)onPanAction:(id)a0;
- (void)updateCoverView;
- (void)updateCoverViewLeft:(BOOL)a0 Right:(BOOL)a1;
- (void)setSelectTopPos:(double)a0;
- (void)setSelectBottomPos:(double)a0;
- (void)setSelectLeftPosTextView:(id)a0 range:(id)a1 end:(BOOL)a2;
- (void)setSelectRightPosTextView:(id)a0 range:(id)a1 end:(BOOL)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)keyCommands;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
