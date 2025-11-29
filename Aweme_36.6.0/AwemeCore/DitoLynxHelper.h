@class NSMutableArray;

@interface DitoLynxHelper : NSObject

@property (retain, nonatomic) NSMutableArray *templateCacheCheckQueue;

- (void)checkLynxTempleteCache:(id)a0 completeBlock:(id /* block */)a1;
- (void)removeLynxTempleteCheckTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
