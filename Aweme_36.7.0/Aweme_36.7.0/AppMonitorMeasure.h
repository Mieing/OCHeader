@class NSString, NSNumber;

@interface AppMonitorMeasure : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *constantValue;
@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) NSNumber *max;

- (id)initWithName:(id)a0 constantValue:(id)a1 min:(id)a2 max:(id)a3;
- (void)setRangeWithMin:(id)a0 max:(id)a1;
- (id)initWithName:(id)a0 constantValue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)valid:(id)a0;

@end
