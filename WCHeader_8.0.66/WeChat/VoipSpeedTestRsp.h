@class NSMutableArray, BaseResponse;

@interface VoipSpeedTestRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int needTest;
@property (nonatomic) unsigned long long testId;
@property (nonatomic) unsigned int svrListCnt;
@property (retain, nonatomic) NSMutableArray *svrList;

+ (void)initialize;

@end
