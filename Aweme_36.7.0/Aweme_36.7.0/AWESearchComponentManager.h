@class NSArray, NSMapTable, NSMutableArray;

@interface AWESearchComponentManager : NSObject

@property (retain, nonatomic) NSMapTable *caches;
@property (retain, nonatomic) NSMutableArray *p_componentList;
@property (readonly, copy, nonatomic) NSArray *componentList;

- (void).cxx_destruct;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;
- (void)insertComponent:(id)a0 atIndex:(long long)a1;

@end
