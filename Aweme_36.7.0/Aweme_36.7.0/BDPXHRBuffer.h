@interface BDPXHRBuffer : NSObject

@property (nonatomic) unsigned long long threshold;
@property unsigned long long nextConsumeRequestID;
@property struct map<unsigned long long, void (^)(), std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)()>>> { struct __tree<std::__value_type<unsigned long long, void (^)()>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, void (^)()>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, void (^)()>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } orderedRequestMap;

- (void)resetThreshold:(unsigned long long)a0;
- (void)add:(unsigned long long)a0 consumeBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithThreshold:(unsigned long long)a0;
- (id).cxx_construct;
- (void)consume;

@end
