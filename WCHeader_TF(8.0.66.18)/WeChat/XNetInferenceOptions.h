@class NSString, NSDictionary;

@interface XNetInferenceOptions : NSObject {
    struct Options { int numThreads; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } modelCachePath; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } gpuLibFilename; struct map<std::string, std::vector<int>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<int>>>> { struct __tree<std::__value_type<std::string, std::vector<int>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<int>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<int>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<int>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<int>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } typicalShape; BOOL allowQuantize; BOOL allowGPU; BOOL allowNPU; BOOL useNpuOnly; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } modelType; int precisionLevel; } _underlying;
}

@property (nonatomic) int numThreads;
@property (retain, nonatomic) NSString *modelCachePath;
@property (retain, nonatomic) NSString *gpuLibFilename;
@property (retain, nonatomic) NSDictionary *typicalShape;
@property (nonatomic) BOOL allowQuantize;
@property (nonatomic) BOOL allowGPU;
@property (nonatomic) BOOL allowNPU;
@property (nonatomic) BOOL useNpuOnly;
@property (retain, nonatomic) NSString *modelType;
@property (nonatomic) int precisionLevel;

- (id)initWithUnderlying:(const void *)a0;
- (const void *)underlying;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
