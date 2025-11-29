@class NSMutableSet;

@interface SettingIndexTreeBuilder : NSObject

@property (retain, nonatomic) NSMutableSet *visitedControllers;
@property (nonatomic) long long maxDepth;

+ (id)buildIndexTreeFromTableViewManager:(id)a0 rootController:(id)a1;

- (id)init;
- (id)buildTreeFromTableViewManager:(id)a0 controller:(id)a1;
- (void)processSection:(id)a0 parentNode:(id)a1 controller:(id)a2 depth:(long long)a3;
- (id)processCellInfo:(id)a0 parentNode:(id)a1 depth:(long long)a2;
- (id)titleForSearch:(id)a0;
- (id)GetChildViewControllerFromPageMapper:(id)a0 parentNode:(id)a1;
- (void)triggerDataLoadForViewController:(id)a0;
- (id)getTableViewManagerFromViewController:(id)a0;
- (void).cxx_destruct;

@end
