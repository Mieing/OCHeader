@interface IGListWorkingRangeHandler : NSObject {
    struct unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::allocator<_IGListWorkingRangeHandlerIndexPath>> { struct __hash_table<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::allocator<_IGListWorkingRangeHandlerIndexPath>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _visibleSectionIndices;
    struct unordered_set<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>> { struct __hash_table<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _workingRangeSectionControllers;
}

@property (readonly, nonatomic) long long workingRangeSize;

- (void)willDisplayItemAtIndexPath:(id)a0 forListAdapter:(id)a1;
- (void)didEndDisplayingItemAtIndexPath:(id)a0 forListAdapter:(id)a1;
- (id)initWithWorkingRangeSize:(long long)a0;
- (void)_updateWorkingRangesWithListAdapter:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
