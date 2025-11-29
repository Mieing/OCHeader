@class NSString;

@interface IESLiveMonitorPerceptionTask : NSObject

@property (copy, nonatomic) NSString *moduleKey;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;

@end
