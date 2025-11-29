@class NSString, NSMutableArray;

@interface AWEECNativePrefetchProcessorReusePool : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *processorList;

- (unsigned long long)reuseCacheCount;
- (id)findReuseProcessorForTargetProcessor:(id)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)addProcessor:(id)a0;

@end
