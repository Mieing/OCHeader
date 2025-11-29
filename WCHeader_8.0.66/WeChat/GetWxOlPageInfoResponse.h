@class DistanceInfo, NSString, BaseResponse;

@interface GetWxOlPageInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) DistanceInfo *tripDriving;
@property (retain, nonatomic) DistanceInfo *tripWalking;
@property (retain, nonatomic) DistanceInfo *tripOther;
@property (retain, nonatomic) DistanceInfo *durationFalse;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *message;

+ (void)initialize;

@end
