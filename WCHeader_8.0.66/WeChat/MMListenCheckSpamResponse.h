@class NSString, BaseResponse;

@interface MMListenCheckSpamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int spamFlag;
@property (retain, nonatomic) NSString *unplayableMsg;

+ (void)initialize;

@end
