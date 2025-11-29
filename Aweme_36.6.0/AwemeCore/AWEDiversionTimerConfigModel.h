@class NSArray, NSString;

@interface AWEDiversionTimerConfigModel : AWEBaseApiModel

@property (nonatomic) double reportInterval;
@property (copy, nonatomic) NSArray *supportScene;
@property (copy, nonatomic) NSArray *evadeType;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *buoyRunningText;
@property (copy, nonatomic) NSString *buoyFinishTextLogin;
@property (copy, nonatomic) NSString *buoyFinishTextUnLogin;
@property (copy, nonatomic) NSString *finishSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
