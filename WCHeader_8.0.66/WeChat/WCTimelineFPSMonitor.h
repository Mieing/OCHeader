@class NSMutableDictionary, CADisplayLink;

@interface WCTimelineFPSMonitor : NSObject {
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { float __value_; } __p3_; } __table_; } _fpsRecords;
}

@property (retain, nonatomic) CADisplayLink *link;
@property (nonatomic) unsigned long long count;
@property (nonatomic) double lastTime;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSMutableDictionary *tickObservers;
@property (nonatomic) unsigned int avgFps;
@property (nonatomic) BOOL canReportFPS_IDKey1408_MMData20222;
@property (nonatomic) BOOL canShowFPSLabel;
@property (nonatomic) BOOL canReportFPS_MMData29222;
@property (nonatomic) BOOL canRecordFPS;

- (id)initWithInterval:(double)a0;
- (id)init;
- (void)dealloc;
- (void)tick:(id)a0;
- (void)updateFpsIndicators:(float)a0;
- (void)start;
- (void)stop;
- (void)addObserver:(id)a0;
- (void)doReport;
- (void)doReportFPS_IDKey1408_MMData20222;
- (id)generateFPSReportString_MMData20222;
- (void)doReportFPS_MMData29222;
- (id)generateFPSReportString_MMData29222;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
