@class DUXPopover, AWEPopoverActionSheet, AFDLeftExtensionPopoverSheetView, AWEUIAlertView;
@protocol AWEIMSkylightExcludeDelegate;

@interface AWEIMSkylightExclude : NSObject

@property (weak, nonatomic) AWEPopoverActionSheet *popover;
@property (weak, nonatomic) AFDLeftExtensionPopoverSheetView *popoverV2;
@property (weak, nonatomic) DUXPopover *duxPopover;
@property (weak, nonatomic) AWEUIAlertView *alertView;
@property (weak, nonatomic) id<AWEIMSkylightExcludeDelegate> delegate;

+ (id)insertWithUids:(id)a0;
+ (id)excludeUids;
+ (void)updateWithUids:(id)a0;
+ (id)cacheKey;

- (BOOL)isPopoverReplaceABTestOn;
- (void)p_disrecommendHerPostWithViewModel:(id)a0;
- (void)p_showPopoverWithListView:(id)a0 cell:(id)a1;
- (id)defaultShapeLayerColorForPreferredTheme;
- (void)p_showBizMenuWithListViewV2:(id)a0 cell:(id)a1;
- (void)p_addActionToDUXPopoverActionSheet:(id)a0 forBizCellModel:(id)a1;
- (double)p_popoverWidthForBizCellModel:(id)a0;
- (void)p_addActionToPopoverActionSheet:(id)a0 forBizCellModel:(id)a1;
- (void)p_showBizMenuWithListView:(id)a0 cell:(id)a1;
- (BOOL)isPreferDarkTheme;
- (void)p_disabledCloseFriends;
- (void)p_disableBizCellModel:(id)a0;
- (void)p_disableFlashBackCellModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_calculateSourceRectForView:(id)a0 cell:(id)a1;
- (void)p_addDisrecommendWithViewModel:(id)a0;
- (void)showMenuWithListView:(id)a0 cell:(id)a1;
- (void)showBizMenuWithListView:(id)a0 cell:(id)a1;
- (void).cxx_destruct;
- (void)dismissMenu;

@end
