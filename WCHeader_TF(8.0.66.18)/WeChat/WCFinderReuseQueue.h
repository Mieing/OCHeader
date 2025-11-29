@class NSMutableDictionary;

@interface WCFinderReuseQueue : NSObject {
    struct multimap<NSString *, NSObject *, WCFinderMapStringKey, std::allocator<std::pair<NSString *const, NSObject *>>> { struct __tree<std::__value_type<NSString *, NSObject *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, NSObject *>, WCFinderMapStringKey>, std::allocator<std::__value_type<NSString *, NSObject *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, NSObject *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, NSObject *>, WCFinderMapStringKey>> { unsigned long long __value_; } __pair3_; } __tree_; } reuseQueue;
}

@property (retain, nonatomic) NSMutableDictionary *registerInfos;

- (id)init;
- (struct WCFinderReuseConfig { id x0; })registerClass:(Class)a0 forIdentifier:(id)a1;
- (id)dequeueObject:(id)a0;
- (void)enqueueObject:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
