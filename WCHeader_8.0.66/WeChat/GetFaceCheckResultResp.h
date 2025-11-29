@class NSString, BaseResponse;

@interface GetFaceCheckResultResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *authToken;
@property (nonatomic) unsigned int retry;
@property (retain, nonatomic) NSString *serialId;

+ (void)initialize;

@end
