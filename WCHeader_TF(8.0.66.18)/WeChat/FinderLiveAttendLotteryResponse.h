@class BaseResponse;

@interface FinderLiveAttendLotteryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int isAttend;

+ (void)initialize;

@end
