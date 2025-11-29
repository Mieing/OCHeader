@class NSString;

@interface DitoMonitorCachedStageModel : NSObject

@property (copy, nonatomic) NSString *stage;
@property (nonatomic) long long times;
@property (nonatomic) double totalDuration;

- (void).cxx_destruct;
- (id)convertToDictionary;

@end
