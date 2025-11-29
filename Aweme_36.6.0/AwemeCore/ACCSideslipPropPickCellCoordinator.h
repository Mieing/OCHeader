@class NSString;

@interface ACCSideslipPropPickCellCoordinator : NSObject <ACCSideslipPropPickCellCoordinatorProtocol>

@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)coordinatorConfigCell:(id)a0 withCellModel:(id)a1;
- (void)p_handleWithCell:(id)a0 cellModel:(id)a1;

@end
