@class NSMutableArray;

@interface LLDitoLynxHelper : NSObject

@property (retain, nonatomic) NSMutableArray *templateCacheCheckQueue;

- (void)removeLynxTempleteCheckTask:(id)a0;
- (void)checkLynxTemplateCache:(id)a0 completeBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
