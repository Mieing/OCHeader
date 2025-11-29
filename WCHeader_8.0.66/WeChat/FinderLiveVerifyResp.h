@class NSString, NSData, BaseResponse;

@interface FinderLiveVerifyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSString *realnameUrl;
@property (retain, nonatomic) NSData *ticket;

+ (void)initialize;

@end
