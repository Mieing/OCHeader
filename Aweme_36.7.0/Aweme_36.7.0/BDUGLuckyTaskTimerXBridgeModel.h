@class NSString;

@interface BDUGLuckyTaskTimerXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long timerInterval;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
