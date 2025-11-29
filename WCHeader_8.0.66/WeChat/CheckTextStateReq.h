@class BaseRequest, NSString, TextStateInfo;

@interface CheckTextStateReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) TextStateInfo *textStateInfo;

+ (void)initialize;

@end
