@class NSArray, NSMapTable, NSMutableArray;

@interface IGListSectionMap : NSObject <NSCopying>

@property (readonly, nonatomic) NSMapTable *objectToSectionControllerMap;
@property (readonly, nonatomic) NSMapTable *sectionControllerToSectionMap;
@property (retain, nonatomic) NSMutableArray *mObjects;
@property (readonly, nonatomic) NSArray *objects;

- (id)debugDescriptionLines;
- (long long)sectionForSectionController:(id)a0;
- (id)sectionControllerForObject:(id)a0;
- (long long)sectionForObject:(id)a0;
- (id)objectForSection:(long long)a0;
- (void)updateWithObjects:(id)a0 sectionControllers:(id)a1;
- (id)initWithMapTable:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sectionControllerForSection:(long long)a0;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (void)updateObject:(id)a0;

@end
