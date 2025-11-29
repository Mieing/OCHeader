@class NSMutableArray;
@protocol WCTableViewMultiSelectionSectionManagerDelegate;

@interface WCTableViewMultiSelectionSectionManager : WCTableViewSectionManager

@property (weak, nonatomic) id<WCTableViewMultiSelectionSectionManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *selectedRows;

- (void)addSelectionCell:(id)a0;
- (id)init;
- (void)didBeClickedAt:(id)a0;
- (void)reloadCells:(id)a0;
- (void).cxx_destruct;

@end
