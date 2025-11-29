@class NSMutableArray, BaseResponse;

@interface GetChatSessionDataResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *sessionInfoList;

+ (void)initialize;

@end
