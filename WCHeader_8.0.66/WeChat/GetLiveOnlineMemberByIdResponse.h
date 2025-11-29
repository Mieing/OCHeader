@class NSMutableArray, BaseResponse;

@interface GetLiveOnlineMemberByIdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *onlineInfoList;

+ (void)initialize;

@end
