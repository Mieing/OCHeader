@interface BDARewardReqTimestampModel : NSObject

@property (nonatomic) long long requestBeginTimeStampMs;
@property (nonatomic) long long requestEndTimeStampMs;
@property (nonatomic) long long parserTimeStampMs;

- (void)recordRequestTimingWithBeginTimeStamp:(double)a0 endTimeStamp:(double)a1 parserTimeStamp:(double)a2;

@end
