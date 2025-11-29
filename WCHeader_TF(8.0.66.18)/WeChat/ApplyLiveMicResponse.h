@class NSString, BaseResponse;

@interface ApplyLiveMicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *liveMicId;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSString *verifyUrl;

+ (void)initialize;

@end
