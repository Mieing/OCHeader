@class NSMutableDictionary;

@interface AppMonitorUTDimensionValueSet : AppMonitorDimensionValueSet

@property (retain, nonatomic) NSMutableDictionary *rawMessageDict;

- (id)initWithEventId:(id)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)eventId;

@end
