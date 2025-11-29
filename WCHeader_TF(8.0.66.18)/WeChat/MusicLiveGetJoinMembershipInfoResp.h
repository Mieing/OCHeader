@class NSString, BaseResponse;

@interface MusicLiveGetJoinMembershipInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *confirmText;

+ (void)initialize;

@end
