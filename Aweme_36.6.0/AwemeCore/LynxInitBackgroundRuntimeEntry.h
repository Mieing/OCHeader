@class NSNumber;

@interface LynxInitBackgroundRuntimeEntry : LynxPerformanceEntry

@property (retain, nonatomic) NSNumber *loadCoreStart;
@property (retain, nonatomic) NSNumber *loadCoreEnd;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
