@class NSString, BaseResponse;

@interface SecureTunnelResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *respbuf;

+ (void)initialize;

@end
