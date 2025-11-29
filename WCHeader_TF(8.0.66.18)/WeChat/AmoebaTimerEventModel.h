@class NSMutableDictionary;

@interface AmoebaTimerEventModel : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long inTime;
@property (nonatomic) unsigned long long outTime;
@property (nonatomic) unsigned long long lastResueTime;
@property (nonatomic) unsigned long long lastPauseTime;
@property (retain, nonatomic) NSMutableDictionary *params;

- (id)init;
- (id)toString;
- (void).cxx_destruct;

@end
