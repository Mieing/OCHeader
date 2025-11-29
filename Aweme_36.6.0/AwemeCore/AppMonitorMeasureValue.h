@class NSNumber;

@interface AppMonitorMeasureValue : NSObject

@property (nonatomic) BOOL isFinish;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *value;

- (id)initWithValue:(id)a0 offset:(id)a1;
- (id)jsonDict;
- (void).cxx_destruct;
- (id)init;
- (void)merge:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithValue:(id)a0;

@end
