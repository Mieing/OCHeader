@class NSDictionary, WAAppTask;

@interface WAAppTaskDataPipeEvent_Base : NSObject

@property (weak, nonatomic) WAAppTask *weakTask;
@property (retain, nonatomic) NSDictionary *dicData;

- (unsigned long long)eventType;
- (id)description;
- (void).cxx_destruct;

@end
