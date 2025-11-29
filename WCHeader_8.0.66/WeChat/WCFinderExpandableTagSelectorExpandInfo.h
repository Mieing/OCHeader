@class NSString, NSMutableDictionary;

@interface WCFinderExpandableTagSelectorExpandInfo : NSObject {
    struct map<long, Group, std::less<long>, std::allocator<std::pair<const long, Group>>> { struct __tree<std::__value_type<long, Group>, std::__map_value_compare<long, std::__value_type<long, Group>, std::less<long>>, std::allocator<std::__value_type<long, Group>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, Group>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, Group>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } groupInfos;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long index;
@property (nonatomic) long long groupNumber;
@property (retain, nonatomic) NSMutableDictionary *identifierMap;

- (id)initWithIndex:(long long)a0 groupNumber:(long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
