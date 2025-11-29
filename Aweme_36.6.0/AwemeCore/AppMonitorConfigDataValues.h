@class NSArray;

@interface AppMonitorConfigDataValues : NSObject

@property (retain, nonatomic) NSArray *values;
@property int include;

- (id)initWithValues:(id)a0 Include:(int)a1;
- (int)getInclude;
- (void).cxx_destruct;
- (id)getValues;

@end
