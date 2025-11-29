@class NSArray;

@interface LLDitoLynxTemplateCheckTask : NSObject

@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) NSArray *hasCacheLynxNodeList;
@property (copy, nonatomic) NSArray *noCacheLynxNodeList;

- (void)didCheckLynxNodeTemplate:(id)a0 noCacheLynxNodeList:(id)a1;
- (void)overtimeAction;
- (void)checkLynxTemplateCache:(id)a0 completeBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
