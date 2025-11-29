@class NSDictionary;

@interface MJRulerView : UIView {
    struct vector<std::tuple<CGPoint, double>, std::allocator<std::tuple<CGPoint, double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<CGPoint, double> *, std::allocator<std::tuple<CGPoint, double>>> { void *__value_; } __end_cap_; } _dotMarks;
    struct vector<std::tuple<double, std::string, std::string>, std::allocator<std::tuple<double, std::string, std::string>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<double, std::string, std::string> *, std::allocator<std::tuple<double, std::string, std::string>>> { void *__value_; } __end_cap_; } _textMarks;
    struct list<std::string, std::allocator<std::string>> { struct __list_node_base<std::string, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::string, void *>>> { unsigned long long __value_; } __size_alloc_; } _lruList;
    struct map<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>>> { struct __tree<std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } _cache;
}

@property (retain, nonatomic) NSDictionary *markStyles;

+ (Class)layerClass;

- (id)initWithMarkStyles:(id)a0;
- (id)shapeLayer;
- (void)drawMarks:(const void *)a0;
- (void)hideAllTextLayers;
- (void)drawDots:(const void *)a0 onPath:(id)a1;
- (void)drawTexts:(const void *)a0 withStyle:(id)a1;
- (id)textLayerForMark:(const void *)a0 withStyle:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
