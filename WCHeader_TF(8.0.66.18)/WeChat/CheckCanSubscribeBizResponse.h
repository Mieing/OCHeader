@class NSString, BaseResponse;

@interface CheckCanSubscribeBizResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *checkTicket;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *webViewUrl;
@property (retain, nonatomic) NSString *showWord;

+ (void)initialize;

@end
