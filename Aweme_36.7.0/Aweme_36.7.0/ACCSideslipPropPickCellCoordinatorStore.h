@class NSMutableDictionary;

@interface ACCSideslipPropPickCellCoordinatorStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *coordinatorMap;

- (id)pickCellCoordinator;
- (id)createAigcCellCoordinator;
- (id)aigcCellCoordinator;
- (id)discoverCellCoordinator;
- (id)noramlCellCoordinator;
- (id)p_coordinatorForKey:(id)a0 lazyCreate:(id /* block */)a1;
- (void).cxx_destruct;

@end
