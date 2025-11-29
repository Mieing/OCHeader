@class NSData, NSString, BaseResponse;

@interface VoIPMtJoinResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ilink3RdappAuthCode;
@property (retain, nonatomic) NSData *clientInfo;
@property (retain, nonatomic) NSString *token;

+ (void)initialize;

@end
