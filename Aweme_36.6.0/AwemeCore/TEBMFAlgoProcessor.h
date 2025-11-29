@class NSString;

@interface TEBMFAlgoProcessor : VERunloopObject

@property (nonatomic) struct shared_ptr<TEAlgorithmBase> { struct TEAlgorithmBase *__ptr_; struct __shared_weak_count *__cntrl_; } algorithm;
@property (nonatomic) struct map<int, std::shared_ptr<TEAlgorithmBase>, std::less<int>, std::allocator<std::pair<const int, std::shared_ptr<TEAlgorithmBase>>>> { struct __tree<std::__value_type<int, std::shared_ptr<TEAlgorithmBase>>, std::__map_value_compare<int, std::__value_type<int, std::shared_ptr<TEAlgorithmBase>>, std::less<int>>, std::allocator<std::__value_type<int, std::shared_ptr<TEAlgorithmBase>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::shared_ptr<TEAlgorithmBase>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::shared_ptr<TEAlgorithmBase>>, std::less<int>>> { unsigned long long __value_; } __pair3_; } __tree_; } mAlgorithms;
@property (copy, nonatomic) NSString *modelPath;

- (struct shared_ptr<TEAlgorithmBase> { struct TEAlgorithmBase *x0; struct __shared_weak_count *x1; })getSuperResAlgorithm:(struct CGSize { double x0; double x1; })a0;
- (id)initSuperRes;
- (void)process2:(id)a0 sequenceId:(id)a1 completion:(id /* block */)a2;
- (void)process:(id)a0 sequenceId:(id)a1 completion:(id /* block */)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
