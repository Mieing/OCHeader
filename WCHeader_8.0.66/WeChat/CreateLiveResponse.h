@class NSString, LiveInfo, BaseResponse;

@interface CreateLiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) LiveInfo *liveInfo;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSString *verifyUrl;

+ (void)initialize;

@end
