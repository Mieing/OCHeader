@class NSMutableArray, BaseResponse;

@interface VoIPMtGetUserInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *users;

+ (void)initialize;

@end
