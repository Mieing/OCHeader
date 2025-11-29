@class DUXLoadingToast, DUXSelectPopover, NSString, AWEPostLayoutSwitchPopover;

@interface AWEPostWorkGuideBubbleController : AWEPostWorkBaseController <AWEPostWorkControllerActionsProtocol, AWEPostWorkGuideBubbleProtocol, DUXSelectPopoverDelegate, DUXPopoverDelegate>

@property (nonatomic) BOOL isDidAppear;
@property (nonatomic) BOOL hasSortGuideBubbleShown;
@property (retain, nonatomic) DUXSelectPopover *switchSortPopover;
@property (retain, nonatomic) DUXLoadingToast *switchLayoutLoadingToast;
@property (retain, nonatomic) AWEPostLayoutSwitchPopover *postLayoutSwitchPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)popoverDidAppear:(id)a0;
- (id)enterFrom;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)onTabViewClick;
- (void)selectPopover:(id)a0 didSelectOption:(id)a1;
- (BOOL)canShowHotSort;
- (BOOL)canShowLayoutSwitch;
- (id)tabSegmentCustomExtAccessibilityText;
- (void)trackForSortPopoverClickedWithType:(unsigned long long)a0;
- (void)showSortGuideBubbleIfNeeded;
- (void)popSelectSortTypeWithTabViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshPopoverOffsetWith:(id)a0 tabViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 preferPopoverWidth:(double)a2 targetView:(id)a3;
- (void)trackForSortPopoverShow:(BOOL)a0;
- (id)userID;
- (void).cxx_destruct;
- (id)user;
- (id)dataManager;
- (id)viewController;
- (void)containerViewDidLoad;

@end
