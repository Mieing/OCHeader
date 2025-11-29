@class NSMutableArray, BaseResponse;

@interface VoIPMtGetSDKUserInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *users;

+ (void)initialize;

@end
