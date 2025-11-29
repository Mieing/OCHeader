@class NSIndexPath, NSString, NSMutableArray, MMTableView;

@interface MMToolManageTableViewLogic : NSObject <MMTableViewReorderDelegate, UITableViewDelegate, UITableViewDataSource, MMToolManageTableViewCellDelegate>

@property (retain, nonatomic) NSMutableArray *addedArray;
@property (retain, nonatomic) NSMutableArray *moreArray;
@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) NSIndexPath *lastMovedToIndex;
@property (retain, nonatomic) MMTableView *tableView;
@property (copy, nonatomic) NSString *sectionStr0;
@property (copy, nonatomic) NSString *sectionStr1;
@property (nonatomic) unsigned long long maxAddedArrayCount;
@property (copy, nonatomic) id /* block */ onCannotAddedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initLogic;
- (void)loadData:(id)a0 moreArray:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 reorderFromIndex:(id)a1 toIndex:(id)a2;
- (BOOL)tableView:(id)a0 shouldStartResortAtPos:(struct CGPoint { double x0; double x1; })a1 inCell:(id)a2 atIndexPath:(id)a3;
- (id)tableView:(id)a0 draggingViewForIndexPath:(id)a1;
- (void)onReorderEnd;
- (void)onClickEditButtonForCell:(id)a0 isAdded:(BOOL)a1;
- (void)onAccessibilityMoveForCell:(id)a0 isUp:(BOOL)a1;
- (void)setOpocityOfCellsInSection1:(double)a0;
- (BOOL)isAllCellinSection1;
- (void).cxx_destruct;

@end
