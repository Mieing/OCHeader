@class AWEProfileHeaderHomeShortcutView, AWEProfileContext, NSString, UITapGestureRecognizer;
@protocol AWEProfileHeaderHomeShortcutCellDelegate;

@interface AWEProfileHeaderHomeShortcutCell : UICollectionViewCell <AWEProfilePadEventSubscriber, AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEProfileHeaderHomeShortcutView *shortcutView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (weak, nonatomic) id<AWEProfileHeaderHomeShortcutCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (void)containerViewChangeToSize:(struct CGSize { double x0; double x1; })a0;
- (id)padService;
- (void)onTapGestureAction:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithHeaderContext:(id)a0;
- (void)updatePadUIIfNeededWithContainerWidth:(double)a0;
- (void)updateAddBtnYellowPointCount:(long long)a0;
- (void)shortCutViewDidAppear;
- (id)addFriendsDotType;
- (long long)addFriendsDotNumber;
- (BOOL)showingEditGoldIcon;
- (BOOL)showingAddGoldIcon;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)languageDidChange;

@end
