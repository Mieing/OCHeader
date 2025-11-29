@class NSString;

@interface SECMetricsItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;

- (void)markEnd:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)duration;
- (void)start;
- (id)initWithName:(id)a0;
- (void)end;
- (void)markStart:(unsigned long long)a0;

@end
