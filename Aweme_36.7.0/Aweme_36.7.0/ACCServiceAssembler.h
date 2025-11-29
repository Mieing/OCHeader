@class NSArray, NSString, NSMutableArray, ACCServiceIntegrateImpl;

@interface ACCServiceAssembler : NSObject <ACCServiceProvideRecipe>

@property (retain, nonatomic) ACCServiceAssembler *parentAssembler;
@property (retain, nonatomic) ACCServiceIntegrateImpl *serviceContainer;
@property (retain, nonatomic) NSMutableArray *allAssemebies;
@property (copy, nonatomic) NSArray *unassebledAssemebies;
@property (nonatomic) unsigned long long abChooseStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerService:(id /* block */)a0 to:(id)a1;
- (id)providerService:(id)a0;
- (id)initWithParentAssembler:(id)a0 assemblis:(id)a1;
- (void)loadAssembliesForStage:(unsigned long long)a0;
- (void)p_assembleServiceWithAssemblies:(id)a0 stage:(unsigned long long)a1;
- (void)p_assembleServiceWithAssemblies:(id)a0;
- (id)initWithAssemblis:(id)a0;
- (void)applyAssemblies:(id)a0;
- (void)applyAssembly:(id)a0;
- (void).cxx_destruct;

@end
