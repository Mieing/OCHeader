@interface IESMMTimeMachineConfig : NSObject

@property (nonatomic) long long timeMachineType;
@property (nonatomic) double beginTime;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;

- (id)init;

@end
