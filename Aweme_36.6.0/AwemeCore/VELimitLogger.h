@interface VELimitLogger : NSObject

@property (nonatomic) double limitInterval;
@property (nonatomic) double lastLoggerTime;
@property (nonatomic) unsigned long long limitCount;
@property (nonatomic) unsigned long long counter;
@property (nonatomic) long long mode;

- (BOOL)checkLimitCount;
- (BOOL)checkLimitInterval;
- (void)doLogger:(id /* block */)a0;
- (id)initWithLimitCount:(unsigned long long)a0;
- (id)initWithLimitInterval:(double)a0;

@end
