@class NSMutableDictionary;

@interface MAViewRecycler : NSObject

@property (retain, nonatomic) NSMutableDictionary *reuseIdentifiersToRecycledViews;

- (void)MAViewRecyclerDeallocOperation;
- (id)dequeueReusableViewWithIdentifier:(id)a0;
- (void)recycleView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllViews;
- (void)dealloc;
- (void)reduceMemoryUsage;

@end
