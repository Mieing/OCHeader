@class UILongPressGestureRecognizer, NSArray, NSString, AFDInplacePopover, UITableView;

@interface AFDHoverablePopoverActionSheet : NSObject <UITableViewDelegate, UITableViewDataSource, AFDHoverablePopoverActionSheetCellDelegate, AFDPopoverDelegate>

@property (retain, nonatomic) NSArray *actionModels;
@property (nonatomic) double contentViewWidth;
@property (retain, nonatomic) AFDInplacePopover *popover;
@property (retain, nonatomic) UITableView *contentTableView;
@property (nonatomic) BOOL hasSelectd;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long colorMode;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (nonatomic) double fixedContentWidth;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } actionSheetOffset;
@property (weak, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimation;
- (void)hoverableCellHoverDidEnd:(id)a0;
- (void)hoverableCellDidTouchUpInside:(id)a0;
- (id)initWithLongPressGesture:(id)a0 actionModels:(id)a1;
- (void)showForView:(id)a0 containerView:(id)a1 direction:(long long)a2;
- (void)p_setTableViewBackGroudColor;
- (id)p_actioncellHoverColor;
- (id)p_buttonTitleColor:(id)a0;
- (id)p_dividerViewColor;
- (void)popoverWillDismiss:(id)a0;
- (id)initWithActionModels:(id)a0;
- (void)updateWithActionModels:(id)a0;
- (void)showForView:(id)a0 direction:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithLongPressGesture:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
