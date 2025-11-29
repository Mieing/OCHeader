@class CADisplayLink, __cap_, __end_;
@protocol IESECGalleryBarDelegate;

@interface IESECGalleryBar : UIView {
    struct vector<CALayer *, std::allocator<CALayer *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _progress_container_layers;
    struct vector<CALayer *, std::allocator<CALayer *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _progress_bars;
    struct unordered_map<unsigned long, std::vector<CGRect>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::vector<CGRect>>>> { struct __hash_table<std::__hash_value_type<unsigned long, std::vector<CGRect>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<CGRect>>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<CGRect>>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, std::vector<CGRect>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<CGRect>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<CGRect>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<CGRect>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<CGRect>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _frames_map;
    CADisplayLink *_displayLink;
}

@property (weak, nonatomic) id<IESECGalleryBarDelegate> delegate;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long currentItem;
@property (nonatomic) double progressBarHeight;

- (void)updateItemAtIndex:(unsigned long long)a0 toProgress:(double)a1;
- (void)updateLayersIfNeeded;
- (struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct CGRect *x2; })layerFramesInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)progressBarSpacing;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
