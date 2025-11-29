@class NSString, NSArray;

@interface AWEByteNNLLMGenerateParams : NSObject

@property (nonatomic) int max_length;
@property (nonatomic) BOOL do_sample;
@property (nonatomic) int num_beams;
@property (nonatomic) float penalty_alpha;
@property (nonatomic) float temperature;
@property (nonatomic) int top_k;
@property (nonatomic) float top_p;
@property (nonatomic) float typical_p;
@property (nonatomic) float diversity_penalty;
@property (nonatomic) float repetition_penalty;
@property (nonatomic) float length_penalty;
@property (nonatomic) int random_seed;
@property (nonatomic) int multi_model_type;
@property (nonatomic) int start_layer;
@property (nonatomic) int end_layer;
@property (copy, nonatomic) NSString *active_lora_name;
@property (copy, nonatomic) NSArray *grids;
@property (copy, nonatomic) NSString *cached_system_prompt;
@property (copy, nonatomic) NSArray *stopping_criteria;

- (struct GenerateParams { int x0; int x1; BOOL x2; int x3; float x4; float x5; int x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; int x16; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x17; struct vector<int, std::allocator<int>> { int *x0; int *x1; int *x2; } x18; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x19; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; } x20; })toByteNNConfig;
- (void).cxx_destruct;
- (id)init;

@end
