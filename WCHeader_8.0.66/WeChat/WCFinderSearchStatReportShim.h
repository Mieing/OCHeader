@class NSString;

@interface WCFinderSearchStatReportShim : NSObject <WCFinderStatReportShim> {
    struct list<InfoItem, std::allocator<InfoItem>> { struct __list_node_base<InfoItem, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<InfoItem, void *>>> { unsigned long long __value_; } __size_alloc_; } _recards;
    struct __list_iterator<InfoItem, void *> { void *__ptr_; } _cursor;
    struct map<NSString *, std::__list_iterator<InfoItem, void *>, RecardEqualID, std::allocator<std::pair<NSString *const, std::__list_iterator<InfoItem, void *>>>> { struct __tree<std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, RecardEqualID>, std::allocator<std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, RecardEqualID>> { unsigned long long __value_; } __pair3_; } __tree_; } _iterMap;
}

@property (retain, nonatomic) NSString *currentTid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCount:(long long)a0;
- (void *)recards;
- (void *)cursor;
- (void *)iterMap;
- (void)onUpdateStatMetaModel:(id)a0;
- (BOOL)filterShouldRecardStatMetaModel:(id)a0;
- (id)collectReadInfoJsonString;
- (void)reset;
- (void)updateCurrentTid:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
