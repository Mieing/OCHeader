@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEPackService : NSObject

@property (retain, nonatomic) Class modelClass;
@property (retain, nonatomic) Class materialClass;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSMutableDictionary *loaders;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *assemblers;

+ (id)packUser;
+ (id)packIMUser;

- (void)pack:(id)a0 completion:(id /* block */)a1;
- (id)pack:(id)a0 error:(id *)a1;
- (id)initWithModelClass:(Class)a0 materialClass:(Class)a1 serviceName:(id)a2;
- (void)awe_registerIMUser;
- (void)registerCoreLoader:(Class)a0;
- (void)registerLoader:(Class)a0;
- (void)registerFilter:(Class)a0;
- (void)registerAssembler:(Class)a0;
- (void)awe_registerUser;
- (void)p_pack:(id)a0 completion:(id /* block */)a1;
- (void)p_trackPackStats:(id)a0;
- (void)registerCoreLoader:(Class)a0 dependencyList:(id)a1;
- (void)registerLoader:(Class)a0 dependencyList:(id)a1 isCore:(BOOL)a2;
- (void)registerLoader:(Class)a0 dependencyList:(id)a1;
- (void).cxx_destruct;

@end
