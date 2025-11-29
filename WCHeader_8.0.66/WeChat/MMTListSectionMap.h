@class NSArray, NSMutableArray, NSMapTable;

@interface MMTListSectionMap : NSObject

@property (retain, nonatomic) NSMutableArray *mObjects;
@property (readonly, nonatomic) NSMapTable *objectToSectionControllerMap;
@property (readonly, nonatomic) NSMapTable *sectionControllerToSectionMap;
@property (readonly, nonatomic) NSArray *objects;

- (id)init;
- (id)sectionControllerForSection:(long long)a0;
- (long long)sectionForSectionController:(id)a0;
- (id)objectForSection:(long long)a0;
- (id)objectForSectionController:(id)a0;
- (id)sectionControllerForObject:(id)a0;
- (long long)sectionForObject:(id)a0;
- (void)updateObject:(id)a0;
- (void)updateWithObjects:(id)a0 sectionControllers:(id)a1;
- (void)reset;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
