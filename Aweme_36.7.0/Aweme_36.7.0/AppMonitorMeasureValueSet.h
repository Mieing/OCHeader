@class NSMutableDictionary;

@interface AppMonitorMeasureValueSet : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *dict;

- (BOOL)containValueForName:(id)a0;
- (void)setDoubleValue:(double)a0 forName:(id)a1;
- (id)jsonDict;
- (void).cxx_destruct;
- (id)init;
- (void)merge:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forName:(id)a1;
- (id)valueForName:(id)a0;

@end
