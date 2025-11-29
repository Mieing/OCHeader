@class NSString, NSData, NSMutableArray, BaseResponse;

@interface VoIPMtCreateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ilink3RdappAuthCode;
@property (retain, nonatomic) NSData *clientInfo;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSMutableArray *calleeIdInfo;

+ (void)initialize;

@end
