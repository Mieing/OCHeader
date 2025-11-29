@class NSString, NSMutableSet, NSMutableArray;
@protocol MMMusicLiveCommentModelDelegate;

@interface MMMusicLiveCommentModel : NSObject <MMMusicLiveCommentBaseViewModelDelegate> {
    struct map<unsigned long long, double, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, double>>> { struct __tree<std::__value_type<unsigned long long, double>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, double>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, double>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_heightCache;
}

@property (class, readonly, nonatomic) NSString *cellIdentifier;

@property (retain, nonatomic) NSMutableSet *existedComment;
@property (retain, nonatomic) NSMutableArray *commentArray;
@property (retain, nonatomic) NSMutableArray *noticeQueue;
@property (weak, nonatomic) id<MMMusicLiveCommentModelDelegate> delegate;
@property (readonly, nonatomic) long long commentCount;
@property (readonly, nonatomic) long long noticeCount;

- (id)init;
- (void)calculateAndCacheHeightFor:(id)a0;
- (void)viewModelDidUpdated:(id)a0;
- (id)viewModelAt:(unsigned long long)a0;
- (id)firstNotice;
- (void)removeFirstNotice;
- (double)heightForCellAt:(unsigned long long)a0;
- (void)clearHeightCache;
- (void)clearHeightCacheFor:(id)a0;
- (void)appendComment:(id)a0;
- (void)addNotice:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
