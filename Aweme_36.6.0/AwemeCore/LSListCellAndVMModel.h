@class NSString, LSIMLynxConfigModel;

@interface LSListCellAndVMModel : NSObject

@property (readonly, copy, nonatomic) NSString *cellReuseID;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) Class cellVMClass;
@property (retain, nonatomic) LSIMLynxConfigModel *lynxConfig;

+ (id)modelWithCellReuseID:(id)a0 cellClass:(Class)a1 cellVMClass:(Class)a2;

- (id)initWithCellReuseID:(id)a0 cellClass:(Class)a1 cellVMClass:(Class)a2;
- (void).cxx_destruct;

@end
