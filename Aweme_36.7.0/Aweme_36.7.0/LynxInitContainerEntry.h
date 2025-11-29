@class NSNumber, NSDictionary;

@interface LynxInitContainerEntry : LynxPerformanceEntry

@property (retain, nonatomic) NSNumber *openTime;
@property (retain, nonatomic) NSNumber *containerInitStart;
@property (retain, nonatomic) NSNumber *containerInitEnd;
@property (retain, nonatomic) NSNumber *prepareTemplateStart;
@property (retain, nonatomic) NSNumber *prepareTemplateEnd;
@property (retain, nonatomic) NSDictionary *extraTiming;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
