@class NSString;

@interface WxaBusinessBaseResponse : WXPBGeneratedMessage

@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;

+ (void)initialize;

@end
