@class NSString, BaseResponse;

@interface PrepareBindXmailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *loginCallbackUrl;
@property (retain, nonatomic) NSString *wxRegMailAddr;
@property (retain, nonatomic) NSString *wxLoginUrl;
@property (retain, nonatomic) NSString *wxHeadUrl;

+ (void)initialize;

@end
