@class BaseResponse, NSString, ExpireTimeInfo, NSData, NSMutableArray, SimMobileLogicResp;

@interface GetGatewayUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SimMobileLogicResp *logicresp;
@property (retain, nonatomic) NSData *respSpamInfo;
@property (retain, nonatomic) NSString *msgid;
@property (retain, nonatomic) NSMutableArray *uplinkUrlInfo;
@property (retain, nonatomic) ExpireTimeInfo *expiredTimeInfo;

+ (void)initialize;

@end
