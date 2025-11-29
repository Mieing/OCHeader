@class BaseRequest, NSString, NSData;

@interface TextStatusGetSelfLikedsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *textStatusId;
@property (retain, nonatomic) NSData *context;

+ (void)initialize;

@end
