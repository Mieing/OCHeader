@class NSString, UITableView;

@interface WCFinderStreamHotAreaTableViewAdapter : NSObject <WCFinderStreamHotAreaAdapter>

@property (retain, nonatomic) UITableView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listVisiableCells;
- (id)indexPathForCell:(id)a0;
- (void).cxx_destruct;

@end
