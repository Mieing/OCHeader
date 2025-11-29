@interface IESMMNewTimeMachineTimeRange : NSObject <NSCopying>

@property (nonatomic) double src_In;
@property (nonatomic) double src_Out;
@property (nonatomic) double des_In;
@property (nonatomic) double des_Out;
@property (nonatomic) double recoverDuration;
@property (nonatomic) double src_Duration;
@property (nonatomic) long long timeMachineType;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
