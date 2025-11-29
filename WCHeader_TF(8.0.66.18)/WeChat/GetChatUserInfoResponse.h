@class NSMutableArray, BaseResponse;

@interface GetChatUserInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *chatUserInfoList;

+ (void)initialize;

@end
