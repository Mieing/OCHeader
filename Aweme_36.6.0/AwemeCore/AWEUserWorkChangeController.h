@class NSMutableSet;

@interface AWEUserWorkChangeController : AWEUserWorkController

@property (retain, nonatomic) NSMutableSet *addAwemeIDSet;
@property (retain, nonatomic) NSMutableSet *removedAwemeIDSet;

- (void)containerViewWillAppear:(BOOL)a0;
- (void)addWithID:(id)a0;
- (void)removeWithID:(id)a0;
- (id)findAwemeModelIDWith:(id)a0;
- (void)dealRemoveWithAwemes:(id)a0;
- (id)findRemovedAwemeModelsWith:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
