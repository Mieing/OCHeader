@interface EmojiEmoticonChangeMgr : NSObject {
    struct map<unsigned long long, tagEmojiItem *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, tagEmojiItem *>>> { struct __tree<std::__value_type<unsigned long long, tagEmojiItem *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, tagEmojiItem *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, tagEmojiItem *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, tagEmojiItem *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, tagEmojiItem *>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapEmojiChangeFromSoftbankToUnified;
    struct map<unsigned long long, tagEmojiItem *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, tagEmojiItem *>>> { struct __tree<std::__value_type<unsigned long long, tagEmojiItem *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, tagEmojiItem *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, tagEmojiItem *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, tagEmojiItem *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, tagEmojiItem *>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapEmojiChangeFromUnifiedToSoftbank;
}

+ (id)shareInstance;

- (id)init;
- (void)dealloc;
- (id)changeEmojiFromSoftbankToUnified:(id)a0;
- (unsigned int)countEmojiFromUnified:(id)a0;
- (unsigned int)countEmojiFromSoftbank:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
