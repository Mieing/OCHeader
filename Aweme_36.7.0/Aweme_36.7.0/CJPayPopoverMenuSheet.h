@class NSString, NSMutableArray, UIFont;

@interface CJPayPopoverMenuSheet : UITableViewController <UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) NSMutableArray *models;
@property (nonatomic) long long clickedButtonIndex;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double cellHeight;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addButtonWithModel:(id)a0;
- (void)showFromView:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 arrowDirection:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;

@end
