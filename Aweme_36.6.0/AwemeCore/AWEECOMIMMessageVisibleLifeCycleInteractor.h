@class NSMutableDictionary;

@interface AWEECOMIMMessageVisibleLifeCycleInteractor : NSObject

@property (retain, nonatomic) NSMutableDictionary *visibleCellPool;

- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 msgModel:(id)a3;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2 msgModel:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
