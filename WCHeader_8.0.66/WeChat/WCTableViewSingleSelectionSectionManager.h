@protocol WCTableViewSingleSelectionSectionManagerDelegate;

@interface WCTableViewSingleSelectionSectionManager : WCTableViewSectionManager

@property (weak, nonatomic) id<WCTableViewSingleSelectionSectionManagerDelegate> delegate;
@property (nonatomic) long long selectedIndex;

- (void)addSelectionCell:(id)a0;
- (id)init;
- (void)didBeClickedAt:(id)a0;
- (void)reloadCells:(id)a0;
- (void).cxx_destruct;

@end
