@class NSString;

@interface IESMLModel : NSObject

@property (nonatomic) BOOL isLens;
@property (nonatomic) long long maxWidth;
@property (nonatomic) long long maxHeight;
@property (nonatomic) struct shared_ptr<IESMLCPPSDK::IMLModel> { struct IMLModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (retain, nonatomic) NSString *modelID;

- (void)predictWithInputParams:(id)a0 async:(BOOL)a1 completion:(id /* block */)a2;
- (id)getPredictionResultWithInputParams:(id)a0;
- (struct map<std::__1::basic_string<char>, IESMLCPPSDK::Variant, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>> { unsigned long long x0; } x2; } x0; })preProcess:(id)a0;
- (id)postProcess:(struct map<std::__1::basic_string<char>, IESMLCPPSDK::Variant, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>> { unsigned long long x0; } x2; } x0; } *)a0 originParams:(id)a1;
- (void)releaseMetalResource;
- (id)initWithSharePtrModel:(struct shared_ptr<IESMLCPPSDK::IMLModel> { struct IMLModel *x0; struct __shared_weak_count *x1; })a0;
- (void)reportLensState:(BOOL)a0 time:(long long)a1;
- (void)cacheImage:(id)a0 url:(id)a1;
- (void)lensProcessImage:(id)a0 url:(id)a1 completion:(id /* block */)a2;
- (void)releaseLensResource;
- (void)processImage:(id)a0 url:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)releaseResource;
- (id).cxx_construct;
- (void)dealloc;
- (id)processor;
- (void)setProcessor:(id)a0;

@end
