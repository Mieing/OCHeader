@class NSArray, Protocol;

@interface PACCUseCaseRegistryItem : NSObject

@property (readonly, nonatomic) Class clazz;
@property (readonly, nonatomic) Protocol *proto;
@property (readonly, nonatomic) Class repoModelClass;
@property (readonly, nonatomic) NSArray *dependencies;

+ (void)checkCycle:(id)a0 list:(id)a1;
+ (id)p_createInstanceWithUseCaseProtocol:(id)a0 context:(id)a1;
+ (id)items;
+ (void)check;

- (id)initWithClass:(Class)a0 protocol:(id)a1 repoModelClass:(Class)a2 dependencies:(id)a3;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (id)customRegistryItem;
- (void).cxx_destruct;

@end
