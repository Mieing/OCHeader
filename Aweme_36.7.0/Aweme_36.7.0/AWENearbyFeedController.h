@class NSString;

@interface AWENearbyFeedController : AWEBaseController <AWETableViewLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
