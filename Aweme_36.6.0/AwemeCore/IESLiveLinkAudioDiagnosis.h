@class NSDictionary, IESLiveLinkAudioDiagnosisConfig;

@interface IESLiveLinkAudioDiagnosis : NSObject {
    void *_diagnosis;
    int _sampleRate;
}

@property (copy, nonatomic) NSDictionary *reportDic;
@property (nonatomic) BOOL enableScoreReport;
@property (nonatomic) BOOL enableCutoffFrequencyReport;
@property (nonatomic) BOOL enableLoudnessReport;
@property (nonatomic) BOOL enableRmsStatsReport;
@property (retain, nonatomic) IESLiveLinkAudioDiagnosisConfig *config;

- (void)processAudioFrame:(id)a0;
- (void)saveResult:(id)a0;
- (struct pair<std::string, std::unordered_map<std::string, int>> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; } x1; })convertDictionaryToPair:(id)a0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })convertDictionaryToChar:(id)a0;
- (struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })convertDictionaryToMap:(id)a0;
- (id)initWithSampleRate:(int)a0 channels:(int)a1 maxBlockSize:(int)a2 config:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getResult;

@end
