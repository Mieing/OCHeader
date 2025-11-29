@class NSMutableDictionary, NSHashTable, UIView, NSMutableArray;

@interface AWERLViewReusePoolManager : NSObject

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSMutableDictionary *pools;
@property (retain, nonatomic) NSMutableArray *vendedViews;
@property (retain, nonatomic) NSHashTable *oldAgeViews;
@property (retain, nonatomic) NSHashTable *youngAgeViews;
@property (nonatomic) BOOL reseted;

+ (id)managerForView:(id)a0;

- (void)__purgeMarkedView;
- (id)viewForKey:(id)a0 creator:(id /* block */)a1;
- (void)markViewMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
