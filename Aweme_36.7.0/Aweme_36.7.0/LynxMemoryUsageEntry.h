@class NSNumber, NSDictionary;

@interface LynxMemoryUsageEntry : LynxPerformanceEntry

@property (retain, nonatomic) NSNumber *sizeBytes;
@property (retain, nonatomic) NSDictionary *detail;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
