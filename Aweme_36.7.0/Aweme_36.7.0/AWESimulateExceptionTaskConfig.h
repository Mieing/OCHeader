@class NSString;

@interface AWESimulateExceptionTaskConfig : NSObject

@property (retain, nonatomic) NSString *crashMsg;
@property (retain, nonatomic) NSString *crashStack;
@property (nonatomic) int testTriggerDelay;
@property (nonatomic) int testTriggerProbability;
@property (nonatomic) int testTriggerRange;
@property (retain, nonatomic) NSString *customerFilters;
@property (retain, nonatomic) NSString *appLogEvent;
@property (retain, nonatomic) NSString *drillPath;
@property (nonatomic) BOOL syncWithException;

+ (BOOL)checkValidDictionary:(id)a0;

- (BOOL)parseFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
