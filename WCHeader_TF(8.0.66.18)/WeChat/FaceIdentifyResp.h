@class NSString, BaseResponse;

@interface FaceIdentifyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *identifyId;
@property (nonatomic) BOOL canRetry;
@property (retain, nonatomic) NSString *bizNickName;
@property (retain, nonatomic) NSString *errTips;

+ (void)initialize;

@end
