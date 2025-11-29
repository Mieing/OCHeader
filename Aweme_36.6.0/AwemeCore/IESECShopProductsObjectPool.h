@class __end_, __cap_, __begin_;

@interface IESECShopProductsObjectPool : NSObject {
    struct deque<id, std::allocator<id>> { struct __split_buffer<__strong id *, std::allocator<__strong id *>> { __begin_ ***__first_; __end_ ***x0; __cap_ ***x1; id **x2; } __map_; unsigned long long __start_; unsigned long long __size_; } _deque;
    unsigned long long _reference_count;
    id /* block */ _objectGenerator;
}

@property (nonatomic) unsigned long long maxSize;

- (id)initWithMaxSize:(unsigned long long)a0 generator:(id /* block */)a1;
- (id)acquire;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithGenerator:(id /* block */)a0;
- (void)release:(id)a0;

@end
