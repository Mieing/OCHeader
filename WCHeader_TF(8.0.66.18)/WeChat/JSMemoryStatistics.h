@class MMMemoryLayout;

@interface JSMemoryStatistics : NSObject

@property (nonatomic) long long offset;
@property (retain, nonatomic) MMMemoryLayout *extraMemory;
@property (retain, nonatomic) MMMemoryLayout *deprecatedExtraMemory;
@property (retain, nonatomic) MMMemoryLayout *arrayBuffers;
@property (retain, nonatomic) MMMemoryLayout *objectSpace;

+ (void)initialize;
+ (unsigned long long)sourceVersion;
+ (id)heapJson;
+ (id)heapInfoWithJson:(id)a0;
+ (void)setEnable:(BOOL)a0;
+ (BOOL)isiPhone;
+ (void)setJson:(id)a0 forVersion:(unsigned long long)a1;
+ (id)memoryStatistics:(struct OpaqueJSContext { } *)a0 callback:(void /* function */ *)a1;
+ (unsigned long long)heapCapacityForContext:(struct OpaqueJSContext { } *)a0;

- (id)initWithDictionary:(id)a0 vm:(struct OpaqueJSContextGroup { } *)a1;
- (void)setVM:(long long)a0;
- (unsigned long long)extraMemorySize;
- (unsigned long long)heapCapacity;
- (void).cxx_destruct;

@end
