@class NSString, NSDictionary;

@interface AWEByteNNLLMConfig : NSObject

@property (copy, nonatomic) NSString *model_name;
@property (copy, nonatomic) NSString *model_path;
@property (nonatomic) int forward_type;
@property (nonatomic) int forward_data_type;
@property (nonatomic) int k_cache_type;
@property (nonatomic) int v_cache_type;
@property (nonatomic) int num_thread;
@property (copy, nonatomic) NSString *runtime_cache_path;
@property (copy, nonatomic) NSString *runtimelib_loading_path;
@property (nonatomic) BOOL use_map_file;
@property (nonatomic) int max_kv_length;
@property (nonatomic) BOOL open_profiling;
@property (copy, nonatomic) NSDictionary *system_prompt_cache;
@property (nonatomic) BOOL auto_fallback;
@property (nonatomic) int power;
@property (nonatomic) int priority;
@property (nonatomic) int memory;

- (struct Config { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; char *x1; int x2; int x3; int x4; int x5; int x6; int x7; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x8; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x9; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x10; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x11; BOOL x12; int x13; BOOL x14; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; } x15; BOOL x16; int x17; int x18; int x19; })toByteNNConfig;
- (void).cxx_destruct;
- (id)init;

@end
