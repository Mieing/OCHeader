@interface AMapLogManager : NSObject

@property (nonatomic) unsigned long long enabledLogType;
@property (nonatomic) BOOL colorsEnabled;

+ (id)sharedInstance;

- (void)setColor:(id)a0 forType:(unsigned long long)a1;
- (void)log:(id)a0 logType:(unsigned long long)a1 file:(const char *)a2 line:(int)a3 function:(const char *)a4 format:(id)a5;

@end
