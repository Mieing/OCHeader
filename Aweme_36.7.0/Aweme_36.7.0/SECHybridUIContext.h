@class NSArray, NSString;

@interface SECHybridUIContext : NSObject

@property (copy) NSArray *viewStacks;
@property (copy) NSArray *pageStacks;
@property (copy) NSString *currentPage;
@property (copy) NSArray *routerStacks;
@property (copy) NSString *scene;

- (void).cxx_destruct;
- (id)dictRepresentation;

@end
