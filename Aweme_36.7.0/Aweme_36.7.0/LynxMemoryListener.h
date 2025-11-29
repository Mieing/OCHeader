@class NSMutableArray;

@interface LynxMemoryListener : NSObject

@property (retain, nonatomic) NSMutableArray *memoryReporters;

+ (id)shareInstance;

- (void)uploadImageInfo:(id)a0;
- (void)addMemoryReporter:(id)a0;
- (void)removeMemoryReporter:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
